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
    TreeNode* build(vector<int> nums, TreeNode* root){
        vector<int> left, right;
        int vmax = *max_element(nums.begin(), nums.end());
        // cout << vmax <<"\n";
        int index, i;
        for(i=0; i<nums.size(); i++){
            if(nums[i] == vmax){
                index = i;
                break;
            }
        }
        for(i=0; i<index; i++){
            left.push_back(nums[i]);
        }
        for(i=index+1; i<nums.size();i++){
            right.push_back(nums[i]);
        }
        if(root == nullptr || root->val == -1){
            root = new TreeNode(vmax);
        }
        if(left.size() != 0){
            root->left = build(left, root->left);
        }
        if(right.size() != 0){
            root->right = build(right, root->right);
        }
        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* tree = new TreeNode(-1);
        return build(nums, tree);
    }
};
