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
    int getDecimalValue(ListNode* head) {
        string bin = "";
        ListNode* itr = head;
        while(itr){
            if(itr->val){
                bin += '1';
            }else{
                bin += '0';
            }
            itr = itr->next;
        }
        int i, j, res;
        res = 0;
        j = 0;
        for(i=bin.size()-1; i>-1; i--){
            if(bin[i] == '1'){
                res += pow(2, j);
            }
            j++;
        }
        return res;
    }
};
