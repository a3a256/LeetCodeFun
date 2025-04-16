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

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty() && inorder.empty()){return nullptr;}
        if(preorder.size() == 1 && inorder.size() == 1){
            TreeNode* node = new TreeNode(preorder[0]);
            return node;
        }
        vector<int> pre, ino;
        int i;
        for(i=0; i<inorder.size(); i++){
            if(inorder[i] == preorder[0]){
                break;
            }else{
                pre.push_back(preorder[i+1]);
                ino.push_back(inorder[i]);
            }
        }
        TreeNode* node = new TreeNode(preorder[0]);
        node->left = buildTree(pre, ino);
        vector<int>().swap(pre);
        vector<int>().swap(ino);
        i++;
        while(i<inorder.size()){
            pre.push_back(preorder[i]);
            ino.push_back(inorder[i]);
            i++;
        }
        node->right = buildTree(pre, ino);
        return node;
    }
};
