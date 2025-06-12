class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int i, diff = 0;
        for(i=0; i<nums.size()-1; i++){
            diff = max(diff, abs(nums[i] - nums[i+1]));
        }
        diff = max(diff, abs(nums.back() - nums[0]));
        return diff;
    }
};
