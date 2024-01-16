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
    vector<int> v;
    void travel(TreeNode* root){
        if(root){
            travel(root->left);
            v.push_back(root->val);
            travel(root->right);
        }
    }
    int minDiffInBST(TreeNode* root) {
        travel(root);
        int i, min_val = INT_MAX;
        for(i=1; i<v.size(); i++){
            min_val = min(min_val, v[i]-v[i-1]);
        }
        return min_val;
    }
};
