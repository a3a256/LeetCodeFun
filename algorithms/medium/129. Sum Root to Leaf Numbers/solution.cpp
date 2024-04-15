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
    int res = 0;
    void travel(TreeNode* tree, int line){
        if(tree){
            line *= 10;
            line += tree->val;
            if(!tree->left && !tree->right){
                res += line;
                return;
            }
            if(tree->right){
                travel(tree->right, line);
            }
            if(tree->left){
                travel(tree->left, line);
            }
        }
    }
    int sumNumbers(TreeNode* root) {
        travel(root, 0);
        return res;
    }
};
