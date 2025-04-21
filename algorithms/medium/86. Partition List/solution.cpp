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
    ListNode* partition(ListNode* head, int x) {
        ListNode* new_node = new ListNode();
        ListNode* temp = new_node;
        ListNode* itr = head;
        while(itr){
            if(itr->val < x){
                ListNode* node = new ListNode(itr->val);
                temp->next = node;
                temp = temp->next;
            }
            itr = itr->next;
        }
        while(head){
            if(head->val >= x){
                ListNode* node = new ListNode(head->val);
                temp->next = node;
                temp = temp->next;
            }
            head = head->next;
        }
        return new_node->next;
    }
};
