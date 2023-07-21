class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int lim = nums.size()/2;
        map<int, int> mp;
        for(int el: nums){
            mp[el] ++;
        }
        int res;
        for(auto it: mp){
            if(it.second>lim){
                res = it.first;
                break;
            }
        }
        return res;
    }
};
