class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int left = 0;
        int i;
        int count = 0;
        for(i=0; i<nums.size()-1; i++){
            left += nums[i];
            total -= nums[i];
            if((left - total)%2 == 0){count++;}
        }
        return count;
    }
};
