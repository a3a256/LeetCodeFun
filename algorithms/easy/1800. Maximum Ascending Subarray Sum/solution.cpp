class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int i, total = 0, cur = -1;
        for(i=1; i<nums.size(); i++){
            if(nums[i] > nums[i-1]){
                if(cur == -1){
                    cur = nums[i]+nums[i-1];
                }else{
                    cur += nums[i];
                }
            }else{
                total = max(total, cur);
                cur = -1;
            }
        }
        total = max(total, cur);
        return max(total, *max_element(nums.begin(), nums.end()));
    }
};
