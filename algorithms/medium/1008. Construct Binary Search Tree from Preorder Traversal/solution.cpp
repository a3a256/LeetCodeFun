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
    TreeNode* construct(vector<int> preorder, TreeNode* branch, int i, int j){
        int index;
        for(index=i; index<j; index++){
            if(preorder[index]>preorder[i]){
                cout << preorder[index] << " ";
                break;
            }
        }
        if(i == 0){
            branch->val = preorder[i];
        }else{
            branch = new TreeNode(preorder[i]);
        }
        if(index > i+1){
            branch->left = construct(preorder, branch->left, i+1, index);
        }
        if(index < j){
            branch->right = construct(preorder, branch->right, index, j);
        }
        return branch;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* tree = new TreeNode(-1);
        return construct(preorder, tree, 0, preorder.size());
    }
};
