class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0, left, right;
        for(int i: nums){
            left = i;
            right = i;
            while(left%3 != 0 && right%3 != 0){
                left--;
                right++;
                count++;
            }
        }
        return count;
    }
};
