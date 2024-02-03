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
    void travel(TreeNode* tree){
        if(tree){
            travel(tree->left);
            arr.push_back(tree->val);
            travel(tree->right);
        }
    }
    int find(vector<int> &arr, int start, int end, int target){
        if(start>end){
            return -1;
        }
        int mid = (start+end)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] > target){
            return find(arr, start, mid-1, target);
        }
        if(arr[mid] < target){
            return find(arr, mid+1, end, target);
        }
        return -1;
    }
    bool findTarget(TreeNode* root, int k) {
        travel(root);
        int i, pos, diff;
        for(i=0; i<arr.size(); i++){
            diff = k - arr[i];
            pos = find(arr, i+1, arr.size()-1, diff);
            if(pos != -1){
                return true;
            }
        }
        return false;
    }
};
