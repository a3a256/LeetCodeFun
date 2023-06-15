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
    vector<int> traverse(TreeNode* root){
        vector<TreeNode*> q;
        vector<int> res;
        TreeNode* curNode;
        int n, vsum;
        q.push_back(root);
        while(q.size() != 0){
            n = q.size();
            vsum = 0;
            while(n!=0){
                curNode = q[0];
                vsum += curNode->val;
                q.erase(q.begin()+0);
                if(curNode->left != nullptr){
                    q.push_back(curNode->left);
                }
                if(curNode->right != nullptr){
                    q.push_back(curNode->right);
                }
                n --;
            }
            res.push_back(vsum);
        }

        return res;
    }

    int maxLevelSum(TreeNode* root) {
        vector<int> sums;
        sums = traverse(root);
        int vmax = *max_element(sums.begin(), sums.end());
        for(int i=0; i<sums.size(); i++){
            if(sums[i] == vmax){
                return i+1;
            }
        }
        return vmax;
    }
};
