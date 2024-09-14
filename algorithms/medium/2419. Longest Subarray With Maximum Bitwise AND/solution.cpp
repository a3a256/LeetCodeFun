class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if(nums.size() == 1){
            return 1;
        }
        int biggest = *max_element(nums.begin(), nums.end());
        int len = 0;
        int i;
        int ans = len;
        if(nums[0] == biggest){
            len++;
        }
        for(i=1; i<nums.size(); i++){
            if(nums[i] == biggest){
                if(nums[i] == nums[i-1]){
                    len++;
                }else{
                    ans = max(len, ans);
                    len = 1;
                }
            }
        }
        if(len > 0){
            ans = max(ans, len);
        }
        return ans;
    }
};
