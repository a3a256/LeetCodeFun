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
    int height(TreeNode* root){
        if(root != nullptr){
            int lft = height(root->left);
            int rgt = height(root->right);
            if(lft == 0 || rgt == 0){
                return 1+max(height(root->left), height(root->right));
            }
            return 1+min(height(root->left), height(root->right));
        }
        return 0;
    }
    int minDepth(TreeNode* root) {
        if(!(root)){
            return 0;
        }
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        if(left == 0 || right == 0){
            return max(left, right)+1;
        }

        return min(left, right)+1;
    }
};
