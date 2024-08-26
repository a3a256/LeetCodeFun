/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

    vector<int> vals;

    void travel(Node* tree){
        if(tree){
            int i;
            for(i=0; i<tree->children.size(); i++){
                travel(tree->children[i]);
            }
            vals.push_back(tree->val);
        }
    }

    vector<int> postorder(Node* root) {
        travel(root);

        return vals;
    }
};
