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
    int gcd(int one, int two){
        int bigger = max(one, two);
        int smaller = min(one, two);
        int cur = smaller;

        while(bigger%cur != 0 || smaller%cur != 0){
            
            cur--;
        }

        return cur;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode dummy(0, head);
        ListNode* itr = &dummy;
        itr = itr->next;
        while(itr->next){
            int d = gcd(itr->val, itr->next->val);
            itr->next = new ListNode(d, itr->next);
            itr = itr->next->next;
        }
        return dummy.next;
    }
};
