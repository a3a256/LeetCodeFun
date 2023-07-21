class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int lim = nums.size()/3;
        map<int, int> mp;
        for(int i: nums){
            mp[i] ++;
        }
        vector<int> res;
        for(auto it: mp){
            if(it.second > lim){
                res.push_back(it.first);
            }
        }
        return res;
    }
};
