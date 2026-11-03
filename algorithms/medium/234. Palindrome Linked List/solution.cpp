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
    bool isPalindrome(ListNode* head) {
        vector<int> list (100001, 0);
        int i = 0, n = 0;
        while(head){
            list[n] = head->val;
            head = head->next;
            n++;
        }
        n--;
        while(i<=n){
            if(list[i] != list[n]){return false;}
            i++;
            n--;
        }
        return true;
    }
};
