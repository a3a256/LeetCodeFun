/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* cur = head;
        ListNode* forward;
        ListNode* prev = NULL;
        while(cur != NULL){
            forward = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forward;
        }
        ListNode* itr = new ListNode(prev->val);
        prev = prev->next;
        while(prev){
            if(prev->val >= itr->val){
                ListNode* node = new ListNode(prev->val);
                node->next = itr;
                itr = node;
            }
            prev = prev->next;
        }
        return itr;
    }
};
