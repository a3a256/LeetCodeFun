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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, int> mp;
        ListNode* itr = head;
        while(itr){
            if(mp[itr] != 0){
                return itr;
            }else{
                mp[itr]++;
            }
            itr = itr->next;
        }
        return itr;
    }
};
