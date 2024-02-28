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
    vector<vector<int>> arr;
    void travel(TreeNode* tree){
        vector<TreeNode*> q;
        vector<int> v;
        int n;
        TreeNode* cur;
        q.push_back(tree);
        while(q.size() != 0){
            n = q.size();
            while(n!=0){
                cur = q[0];
                q.erase(q.begin()+0);
                if(cur->left){
                    q.push_back(cur->left);
                }
                if(cur->right){
                    q.push_back(cur->right);
                }
                v.push_back(cur->val);
                n--;
            }
            arr.push_back(v);
            vector<int>().swap(v);
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        travel(root);
        return arr.back()[0];
    }
};
