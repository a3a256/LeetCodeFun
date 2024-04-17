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
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<string> arr;

    void travel(TreeNode* root, string line){
        if(!root){
            return;
        }

        line += alphabet[root->val];
        if(!root->left && !root->right){
            reverse(line.begin(), line.end());
            arr.push_back(line);
            return;
        }
        if(root->left){
            travel(root->left, line);
        }
        if(root->right){
            travel(root->right, line);
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        string line = "";
        travel(root, line);
        sort(arr.begin(), arr.end());
        return arr[0];
    }
};
