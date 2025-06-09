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
    vector<int> rightSideView(TreeNode* root) {
        TreeNode* cur_node;
        vector<TreeNode*> q;
        int n;
        vector<int> res;
        if(!root){
            return res;
        }
        q.push_back(root);
        while(q.size() != 0){
            n = q.size();
            while(n!=0){
                cur_node = q[0];
                q.erase(q.begin()+0);
                if(cur_node->left){
                    q.push_back(cur_node->left);
                }
                if(cur_node->right){
                    q.push_back(cur_node->right);
                }
                n--;
            }
            res.push_back(cur_node->val);
        }
        return res;
    }
};
