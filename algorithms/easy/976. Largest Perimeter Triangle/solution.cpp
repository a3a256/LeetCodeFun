class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i, size, cur;
        size = nums.size();
        for(i=size-3; i>-1; i--){
            cur = nums[i]+nums[i+1];
            if(cur>nums[i+2]){
                return cur+nums[i+2];
            }
        }
        return 0;
    }
};
