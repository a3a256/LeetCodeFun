class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i, count, size;
        count = 1;
        size = 0;
        for(i=1; i<nums.size(); i++){
            if(nums[i]<=nums[i-1]){
                size = max(size, count);
                count = 0;
            }
            count++;
        }
        size = max(size, count);
        return size;
    }
};
