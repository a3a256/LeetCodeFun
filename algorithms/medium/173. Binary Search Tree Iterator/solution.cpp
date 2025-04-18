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
class BSTIterator {
public:
    vector<int> v;
    int i = 0, val;
    BSTIterator(TreeNode* root) {
        travel(root);
    }

    void travel(TreeNode* tree){
        if(tree){
            travel(tree->left);
            v.push_back(tree->val);
            travel(tree->right);
        }
    }
    
    int next() {
        val = v[i];
        i++;
        return val;
    }
    
    bool hasNext() {
        if(i >= v.size()){
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
