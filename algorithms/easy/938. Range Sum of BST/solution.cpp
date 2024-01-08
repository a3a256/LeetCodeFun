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
    int sum = 0;
    void travel(TreeNode* tree, int low, int high){
        if(tree){
            travel(tree->left, low, high);
            if(tree->val >= low && tree->val <= high){
                sum += tree->val;
            }
            travel(tree->right, low, high);
        }
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        travel(root, low, high);
        return sum;
    }
};
