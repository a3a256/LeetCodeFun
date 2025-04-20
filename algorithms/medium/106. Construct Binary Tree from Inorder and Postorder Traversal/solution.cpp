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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(postorder.empty() && inorder.empty()){return nullptr;}
        TreeNode* node = new TreeNode(postorder.back());
        if(postorder.size() == 1 && inorder.size() == 1){
            return node;
        }
        vector<int> ino, pos;
        int i, j;
        for(i=0; i<inorder.size(); i++){
            if(inorder[i] == postorder.back()){
                break;
            }
            ino.push_back(inorder[i]);
            pos.push_back(postorder[i]);
        }
        node->left = buildTree(ino, pos);
        vector<int>().swap(ino);
        vector<int>().swap(pos);
        i++;
        while(i<inorder.size()){
            ino.push_back(inorder[i]);
            pos.push_back(postorder[i-1]);
            i++;
        }
        node->right = buildTree(ino, pos);
        vector<int>().swap(ino);
        vector<int>().swap(pos);
        return node;
    }
};
