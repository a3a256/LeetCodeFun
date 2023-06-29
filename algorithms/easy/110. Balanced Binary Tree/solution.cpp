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
    string flag = "";
    int heights(TreeNode* root){
        if(root != nullptr){
            int left = heights(root->left);
            int right = heights(root->right);
            int diff = left - right;
            if(diff < -1 || diff > 1){
                flag = "boogeyman";
            }

            return 1+max(left, right);
        }
        return 0;
    }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        int left = heights(root->left);
        int right = heights(root->right);
        int diff = left-right;
        if(flag == "boogeyman"){
            return false;
        }
        return (diff >= -1 && diff <= 1) ;
    }
};
