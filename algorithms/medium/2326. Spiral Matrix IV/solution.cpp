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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> res(m, vector<int>(n, -1));
        ListNode* itr = head;
        int i, j, row_end, col_end, col_start, row_start;
        row_end = m-1;
        row_start = 0;
        col_end = n-1;
        col_start = 0;
        bool row_left_right, corners_down, corners_up, row_right_left;
        row_left_right = true;
        corners_down = false;
        corners_up = false;
        row_right_left = false;
        i=0; j=0;
        while(itr){
            if(row_left_right){
                if(j<col_end){
                    res[i][j] = itr->val;
                    j++;
                }else if(j == col_end){
                    res[i][j] = itr->val;
                    corners_down = true;
                    row_left_right = false;
                    row_start++;
                    i++;
                }
            }else if(corners_down){
                if(i<row_end){
                    res[i][j] = itr->val;
                    i++;
                }else if(i==row_end){
                    res[i][j] = itr->val;
                    row_right_left = true;
                    corners_down = false;
                    col_end--;
                    j--;
                }
            }else if(row_right_left){
                if(j>col_start){
                    res[i][j] = itr->val;
                    j--;
                }else if(j==col_start){
                    res[i][j] = itr->val;
                    corners_up = true;
                    row_right_left = false;
                    row_end--;
                    i--;
                }
            }else if(corners_up){
                if(i>row_start){
                    res[i][j] = itr->val;
                    i--;
                }else if(i == row_start){
                    res[i][j] = itr->val;
                    corners_up = false;
                    row_left_right = true;
                    col_start++;
                    j++;
                }
            }
            itr = itr->next;
        }

        return res;
    }
};
