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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){return head;}
        ListNode* itr = head;
        int len = 0, i;
        while(itr){
            len++;
            itr = itr->next;
        }
        k = (k>=len)?k%len:k;
        ListNode* new_node = new ListNode();
        ListNode* temp = new_node;
        itr = head;
        i = 0;
        while(itr && i < len-k){
            itr = itr->next;
            i++;
        }
        while(itr){
            ListNode* node = new ListNode(itr->val);
            temp->next = node;
            temp = temp->next;
            itr = itr->next;
        }
        i = 0;
        while(head && i<len-k){
            ListNode* node = new ListNode(head->val);
            temp->next = node;
            temp = temp->next;
            head = head->next;
            i++;
        }
        return new_node->next;
    }
};
