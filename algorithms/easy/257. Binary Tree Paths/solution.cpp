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
    vector<vector<int>> res;
    void parse(TreeNode* root, vector<int>& arr){
        if(root){
            arr.push_back(root->val);
            if(root->left == nullptr && root->right == nullptr){
                res.push_back(arr);
            }else{
                parse(root->left, arr);
                parse(root->right, arr);
            }
            arr.pop_back();
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> arr;
        vector<string> fin;
        parse(root, arr);
        string line = "";
        for(vector<int> i: res){
            line = "";
            for(int j: i){
                line += to_string(j);
                line += "->";
            }
            line.pop_back();
            line.pop_back();
            fin.push_back(line);
        }
        return fin;
    }
};
