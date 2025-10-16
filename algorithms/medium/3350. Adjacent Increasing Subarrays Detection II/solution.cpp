class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        vector<pair<int, int>> mp;
        int i, start = 0, dist = 0, temp;
        for(i=1; i<nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                mp.push_back({start, i});
                dist = max(dist, (i-start)/2);
                start = i;
            }
        }
        mp.push_back({start, i});
        dist = max(dist, (i-start)/2);
        if(mp.size() == 1){return dist;}
        for(i=1; i<mp.size(); i++){
            temp = min(mp[i-1].second - mp[i-1].first, mp[i].second - mp[i].first);
            dist = max(dist, temp);
        }
        return dist;
    }
};
