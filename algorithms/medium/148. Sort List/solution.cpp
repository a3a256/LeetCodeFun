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
    ListNode* sortList(ListNode* head) {
        priority_queue<int, vector<int>, greater<int> >q;
        ListNode* itr = head;
        while(itr){
            q.push(itr->val);
            itr = itr->next;
        }
        itr = head;
        while(!q.empty()){
            itr->val = q.top();
            itr = itr->next;
            q.pop();
        }
        return head;
    }
};
