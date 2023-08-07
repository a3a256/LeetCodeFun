class Solution {
public:
    vector<int> dp;
    int rob(vector<int>& nums) {
        dp.resize(nums.size()+1, -1);
        return process(nums, nums.size()-1);
    }

private:
    int process(vector<int>& arr, int i){
        if(i<0){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        int res = max(process(arr, i-1), arr[i]+process(arr, i-2));
        dp[i] = res;
        return res;
    }
};
