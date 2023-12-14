class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        map<int, int> mp;
        int i, back, pre_back;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]] = i;
        }
        sort(nums.begin(), nums.end());
        back = nums.back();
        pre_back = nums[nums.size()-2];
        if(pre_back == 0){
            return mp[back];
        }
        if(back/pre_back >= 2){
            return mp[back];
        }
        return -1;
    }
};
