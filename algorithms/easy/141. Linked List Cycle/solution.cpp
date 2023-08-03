/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        vector<ListNode*> res;
        ListNode* itr = head;
        while(itr != nullptr){
            if(find(res.begin(), res.end(), itr) != res.end()){
                return true;
            }else{
                res.push_back(itr);
            }
            itr = itr->next;
        }
        return false;
    }
};
