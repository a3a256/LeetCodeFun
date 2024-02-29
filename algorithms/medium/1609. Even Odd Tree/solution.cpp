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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* cur;
        int n, index, prev_val;
        index = 0;
        while(q.size() != 0){
            n = q.size();
            prev_val = -1;
            while(n!=0){
                cur = q.front();
                q.pop();
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
                if(index%2 == 0){
                    if(cur->val%2 == 0){
                        return false;
                    }else{
                        if(prev_val != -1){
                            if(prev_val >= cur->val){
                                return false;
                            }
                        }
                        prev_val = cur->val;
                    }
                }else{
                    if(cur->val%2 != 0){
                        return false;
                    }else{
                        if(prev_val != -1){
                            if(prev_val <= cur->val){
                                return false;
                            }
                        }
                        prev_val = cur->val;
                    }
                }
                n--;
            }
            index++;
        }
        return true;
    }
};
