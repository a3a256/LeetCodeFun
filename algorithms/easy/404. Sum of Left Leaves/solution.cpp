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
    void travel(TreeNode* tree, int left){
        if(!tree){
            return;
        }
        if(!tree->left && !tree->right){
            if(left){
                res += tree->val;
            }
            return;
        }
        if(tree->left){
            travel(tree->left, 1);
        }
        if(tree->right){
            travel(tree->right, 0);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        travel(root->left, 1);
        travel(root->right, 0);
        return res;
    }
};
