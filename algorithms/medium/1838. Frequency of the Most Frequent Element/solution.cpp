class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i, j = 0;
        long cur_sum = 0;
        long len = 0;
        for(i=0; i<nums.size(); i++){
            cur_sum += nums[i];
            while(nums[i]*static_cast<long>(i-j+1) > k+cur_sum){
                cur_sum -= nums[j];
                j++;
            }
            len = max(len, static_cast<long>(i-j+1));
        }
        return len;
    }
};
