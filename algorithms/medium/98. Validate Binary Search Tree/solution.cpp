/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> vet;
    void travel(TreeNode* tree){
        if(tree){
            travel(tree->left);
            vet.push_back(tree->val);
            travel(tree->right);
        }
    }

    bool isValidBST(TreeNode* root) {
        travel(root);
        set<int> stk;
        for(int i: vet){
            stk.insert(i);
        }
        if(stk.size() != vet.size()){
            return false;
        }
        int i = 0;
        for(auto it: stk){
            if(it != vet[i]){
                return false;
            }
            i++;
        }
        return true;
    }
};
