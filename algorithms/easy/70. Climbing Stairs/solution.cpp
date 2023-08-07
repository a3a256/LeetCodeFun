class Solution {
public:
    int climbStairs(int n) {
        int first = 1, second = 1, i, temp;
        for(i=0; i<n-1; i++){
            temp = second;
            second += first;
            first = temp;
        }
        return second;
    }
};
