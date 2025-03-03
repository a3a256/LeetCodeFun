class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> mp;
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        for(auto it: nums1){
            if(mp[it[0]] == 0){
                mp[it[0]] = it[1];
            }else{
                mp[it[0]] += it[1];
            }
        }
        vector<vector<int>> res;
        for(auto it: mp){
            res.push_back({it.first, it.second});
        }
        return res;
    }
};
