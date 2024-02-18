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
    int total = 0;
    void travel(TreeNode* tree, string line){
        if(tree){
            line += to_string(tree->val);
            if(!tree->left && !tree->right){
                total += stoi(line, nullptr, 2);
            }
            if(tree->left){
                travel(tree->left, line);
            }
            if(tree->right){
                travel(tree->right, line);
            }
        }
    }
    int sumRootToLeaf(TreeNode* root) {
        string line = "";
        travel(root, line);
        return total;
    }
};
