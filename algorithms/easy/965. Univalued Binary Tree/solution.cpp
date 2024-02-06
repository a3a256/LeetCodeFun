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
    set<int> arr;
    void travel(TreeNode* tree){
        if(tree){
            travel(tree->left);
            arr.insert(tree->val);
            travel(tree->right);
        }
    }
    bool isUnivalTree(TreeNode* root) {
        travel(root);
        return arr.size() == 1;
    }
};
