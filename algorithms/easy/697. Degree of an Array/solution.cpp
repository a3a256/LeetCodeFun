class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> mp;
        map<int, pair<int, int>> dp;
        int i, freq, distance;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        freq = INT_MIN;
        for(auto it: mp){
            freq = max(freq, it.second);
        }
        for(i=0; i<nums.size(); i++){
            if(mp[nums[i]] == freq){
                if(dp.find(nums[i]) == dp.end()){
                    dp[nums[i]] = {i, i};
                }else{
                    dp[nums[i]].second = i;
                }
            }
        }
        distance = INT_MAX;
        for(auto it: dp){
            distance = min(distance, it.second.second-it.second.first+1);
        }
        return distance;
    }
};
