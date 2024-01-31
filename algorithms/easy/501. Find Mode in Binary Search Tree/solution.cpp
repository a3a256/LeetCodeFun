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
    map<int, int> mp;
    void travel(TreeNode* root){
        if(root){
            travel(root->left);
            mp[root->val]++;
            travel(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        travel(root);
        int freq = 0, i;
        vector<int> v;
        for(auto it: mp){
            freq = max(freq, it.second);
        }
        for(auto it: mp){
            if(it.second == freq){
                v.push_back(it.first);
            }
        }
        return v;
    }
};
