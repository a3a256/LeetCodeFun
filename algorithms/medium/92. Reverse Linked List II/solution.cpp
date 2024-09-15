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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* itr;
        int i;
        vector<int> v;
        itr = head;
        while(itr){
            v.push_back(itr->val);
            itr = itr->next;
        }
        reverse(v.begin()+left-1, v.begin()+right);
        ListNode dummy(0, head);
        itr = &dummy;
        itr = itr->next;
        i = 0;
        while(itr){
            itr->val = v[i];
            i++;
            itr = itr->next;
        }
        return dummy.next;
    }
};
