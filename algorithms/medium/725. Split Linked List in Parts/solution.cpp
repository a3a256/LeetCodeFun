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
    ListNode* create(ListNode* node, ListNode* prev, int index, int len){
        ListNode* part = new ListNode(node->val);
        prev = part;
        if(index == len-1){
            return prev;
        }
        prev->next = create(node->next, prev->next, index+1, len);
        return prev;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* itr = head;
        ListNode* temp = new ListNode();
        int count = 0;
        while(itr){
            itr = itr->next;
            count++;
        }
        int i;
        vector<ListNode*> ans;
        if(k>count){
            i = 0;
            itr = head;
            while(i<count){
                ans.push_back(new ListNode(itr->val));
                i++;
                itr = itr->next;
            }
            while(i<k){
                ans.push_back(temp->next);
                i++;
            }
            return ans;
        }
        int parts = count/k;
        int left = count%k;
        itr = head;
        int j, res;
        ListNode* check;
        for(i=0; i<k; i++){
            res = parts;
            if(left>0){
                res++;
                left--;
            }
            check = create(itr, temp, 0, res);
            ans.push_back(check);
            j = 0;
            while(j<res){
                itr = itr->next;
                j++;
            }
        }
        return ans;
    }
};
