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
    vector<int> largestValues(TreeNode* root) {
        if(!(root)){
            return {};
        }
        vector<TreeNode*> q;
        q.push_back(root);
        TreeNode* curNode;
        int maximal, n;
        vector<int> res;
        while(q.size() != 0){
            n = q.size();
            maximal = INT_MIN;
            while(n!=0){
                curNode = q[0];
                q.erase(q.begin()+0);
                maximal = max(curNode->val, maximal);
                if(curNode->left){
                    q.push_back(curNode->left);
                }
                if(curNode->right){
                    q.push_back(curNode->right);
                }
                n--;
            }
            res.push_back(maximal);
        }
        return res;
    }
};
