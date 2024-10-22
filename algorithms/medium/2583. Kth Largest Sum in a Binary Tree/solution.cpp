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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<TreeNode*> q;
        q.push_back(root);
        TreeNode* cur;
        int n;
        long long sum = 0;
        priority_queue<long long> pq;
        while(q.size() != 0){
            n = q.size();
            sum = 0;
            while(n!=0){
                cur = q[0];
                sum += cur->val;
                q.erase(q.begin()+0);
                if(cur->left != nullptr){
                    q.push_back(cur->left);
                }
                if(cur->right != nullptr){
                    q.push_back(cur->right);
                }
                n--;
            }
            pq.push(sum);
        }
        sum = 0;
        int i = 1;
        if(pq.size() < k){
            return -1;
        }
        
        while(i<=k){
            sum = pq.top();
            pq.pop();
            i++;
        }
        return sum;
    }
};
