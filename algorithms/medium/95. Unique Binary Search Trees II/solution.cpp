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

    vector<TreeNode*> generateTrees(int n) {
        return n?generate_trees(1, n):vector<TreeNode*>();
    }

private:
    vector<TreeNode*> generate_trees(int start, int end){
        if(start > end){
            return {nullptr};
        }
        vector<TreeNode*> arr;
        for(int i=start; i<=end; i++){
            vector<TreeNode*> left_tree = generate_trees(start, i-1);
            vector<TreeNode*> right_tree = generate_trees(i+1, end);
            for(TreeNode* l: left_tree){
                for(TreeNode* r: right_tree){
                    TreeNode* curNode = new TreeNode(i);
                    curNode->left = l;
                    curNode->right = r;
                    arr.push_back(curNode);
                }
            }
        }
        return arr;
    }
};
