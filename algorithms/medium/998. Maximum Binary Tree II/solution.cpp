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
    vector<int> arr;
    TreeNode* build(TreeNode* root, vector<int> nums){
        int vmax = *max_element(nums.begin(), nums.end());
        int i, index;
        vector<int> left, right;
        for(i=0; i<nums.size(); i++){
            if(nums[i] ==vmax){
                index = i;
                break;
            }
        }
        for(i=0; i<index; i++){
            left.push_back(nums[i]);
        }
        for(i=index+1; i<nums.size(); i++){
            right.push_back(nums[i]);
        }
        if(root == nullptr || root->val == -1){
            root = new TreeNode(vmax);
        }
        if(left.size() != 0){
            root->left = build(root->left, left);
        }
        if(right.size() != 0){
            root->right = build(root->right, right);
        }
        return root;
    }
    void iot(TreeNode* root){
        if(root != nullptr){
            iot(root->left);
            arr.push_back(root->val);
            iot(root->right);
        }
    }

    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        iot(root);
        arr.push_back(val);
        TreeNode* tree = new TreeNode(-1);
        return build(tree, arr);
    }
};
