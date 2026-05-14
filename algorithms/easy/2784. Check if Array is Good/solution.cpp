class Solution {
public:
    bool isGood(vector<int>& nums) {
        int max_val = *max_element(nums.begin(), nums.end());
        map<int, int> mp;
        for(int i: nums){
            mp[i]++;
        }
        return mp.size() == max_val && mp[max_val] == 2 && nums.size() == max_val+1;
    }
};
