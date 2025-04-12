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
    void reorderList(ListNode* head) {
        ListNode* itr = head;
        bool ordered = true;
        stack<int> stk;
        vector<int> v;
        while(itr){
            v.push_back(itr->val);
            stk.push(itr->val);
            itr = itr->next;
        }
        int i = 0;
        itr = head;
        while(itr){
            if(ordered){
                itr->val = v[i];
                ordered = false;
                i++;
            }else{
                itr->val = stk.top();
                stk.pop();
                ordered = true;
            }
            itr = itr->next;
        }
    }
};
