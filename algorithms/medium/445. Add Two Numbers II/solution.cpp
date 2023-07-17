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
    ListNode* construct(ListNode* main, vector<int> one, vector<int> two, int i, int j, int coef){
        int sum = 0;
        if(i<one.size()){
            sum += one[i];
        }
        if(j<two.size()){
            sum += two[j];
        }

        if(i >= one.size() && j>=two.size() && coef == 0){
            return main;
        }
        sum += coef;
        if(sum >= 10){
            sum = sum%10;
            coef = 1;
        }else{
            coef = 0;
        }
        ListNode* itr = main;
        main = new ListNode(sum);
        main->next = itr;
        return construct(main, one, two, i+1, j+1, coef);
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> one, two;
        while(l1 != nullptr || l2 != nullptr){
            if(l1 != nullptr){
                one.push_back(l1->val);
                l1 = l1->next;
            }
            if(l2 != nullptr){
                two.push_back(l2->val);
                l2 = l2->next;
            }
        }
        ListNode* nodes = new ListNode(0);
        reverse(one.begin(), one.end());
        reverse(two.begin(), two.end());
        nodes->next = construct(nodes->next, one, two, 0, 0, 0);
        return nodes->next;
    }
};
