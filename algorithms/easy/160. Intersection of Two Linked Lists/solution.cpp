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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a = 0, b = 0;
        ListNode* itr = headA;
        while(itr){a++;itr=itr->next;}
        itr = headB;
        while(itr){b++;itr=itr->next;}
        while(a>b){
            headA = headA->next;
            a--;
        }
        while(b>a){
            headB = headB->next;
            b--;
        }
        while(headA){
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    }
};
