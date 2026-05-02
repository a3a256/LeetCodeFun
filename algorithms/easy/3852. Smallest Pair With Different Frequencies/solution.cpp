class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int, int> mp;
        for(int i: nums){
            mp[i]++;
        }
        int small = -1, freq = -1;
        for(auto it: mp){
            for(auto ti: mp){
                if(ti.first > it.first && ti.second != it.second){
                    return {it.first, ti.first};
                }
            }
        }
        return {-1, -1};
    }
};
