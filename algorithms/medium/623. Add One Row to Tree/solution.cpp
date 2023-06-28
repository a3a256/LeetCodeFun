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
    TreeNode* travel(TreeNode* root, int depth, int val, int left, int needed){
        if(root != nullptr){
            if(depth == needed){
                TreeNode* branch = new TreeNode(val);
                if(left == 1 || left == -1){
                    branch->left = root;
                    root = branch;
                }else{
                    branch->right = root;
                    root = branch;
                }
            }else{
                root -> left = travel(root->left, depth+1, val, 1, needed);
                root -> right = travel(root->right, depth+1, val, 0, needed);
            }
        }else if(root == nullptr && depth == needed){
            root = new TreeNode(val);
        }

        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        TreeNode* tree = travel(root, 1, val, -1, depth);
        return tree;
    }
};
