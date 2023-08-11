class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int deep = INT_MIN;
        int cur = 0, i;
        for(i=0; i<nums.size(); i++){
            cur += nums[i];
            deep = max(deep, cur);
            cur = max(cur, 0);
        }
        return deep;
    }
};
