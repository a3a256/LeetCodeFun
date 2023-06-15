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
class FindElements {
public:
    TreeNode* head;
    FindElements(TreeNode* root) {
        head = root;
        head->val = 0;
        pot(head->left, 0, 1);
        pot(head->right, 0, 0);
    }

    void pot(TreeNode* root, int prev, int left){
        int coef = (left == 1)?1:2;
        if(root != nullptr){
            root->val = prev*2+coef;
            pot(root->left, root->val, 1);
            pot(root->right, root->val, 0);
        }
    }

    int search(TreeNode* root, int target){
        if(root != nullptr){
            if(root->val == target){
                return 1;
            }
            return 0+search(root->left, target)+search(root->right, target);
        }
        return 0;
    }
    
    bool find(int target) {
        int is_here = search(head, target);
        if(is_here == 0){
            return false;
        }
        return true;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
