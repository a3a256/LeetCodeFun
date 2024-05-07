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
    ListNode* doubleIt(ListNode* head) {
        ListNode* cur = head;
        ListNode* forward;
        ListNode* prev = NULL;
        while(cur != NULL){
            forward = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forward;
        }
        int num, coef;
        num = prev->val*2;
        coef = (int)(num/10);
        num = num%10;
        ListNode* ans = new ListNode(num);
        prev = prev->next;
        while(prev){
            num = prev->val*2;
            num += coef;
            coef = (int)(num/10);
            num = num%10;
            ListNode* node = new ListNode(num);
            node->next = ans;
            ans = node;
            prev = prev->next;
        }
        if(coef == 1){
            ListNode* node = new ListNode(1);
            node->next = ans;
            ans = node;
        }
        return ans;
    }
};
