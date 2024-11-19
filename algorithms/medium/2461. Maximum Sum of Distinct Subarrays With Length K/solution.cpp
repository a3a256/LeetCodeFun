class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long total = 0;
        map<int, int> mp;
        int i;
        for(i=0; i<k; i++){
            mp[nums[i]]++;
            total += nums[i];
        }
        long long res = 0;
        if(mp.size() == k){
            res = total;
        }
        for(i=k; i<nums.size(); i++){
            if(mp[nums[i-k]] == 1){
                mp.erase(nums[i-k]);
            }else{
                mp[nums[i-k]] -= 1;
            }
            mp[nums[i]]++;
            total -= nums[i-k];
            total += nums[i];
            if(mp.size() == k){
                res = max(total, res);
            }
        }
        return res;
    }
};
