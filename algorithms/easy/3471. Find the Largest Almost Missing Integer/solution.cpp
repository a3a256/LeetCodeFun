class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int i: nums){
            mp[i]++;
        }
        int largest_once = -1;
        for(auto it: mp){
            if(it.second == 1){
                largest_once = max(largest_once, it.first);
            }
        }
        if(k == 1){
            return largest_once;
        }
        if(k == nums.size()){
            return *max_element(nums.begin(), nums.end());
        }
        if(mp[nums[0]] == 1 && mp[nums.back()] == 1){
            if(nums[0] != nums.back()){
                return max(nums.back(), nums[0]);
            }else{
                return -1;
            }
        }
        if(mp[nums[0]] == 1){
            return nums[0];
        }
        if(mp[nums.back()] == 1){
            return nums.back();
        }
        return -1;
    }
};
