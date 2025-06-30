class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> mp;
        int i;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int res = 0;
        for(auto it: mp){
            if(mp.find(it.first+1) != mp.end()){
                res = max(res, it.second+mp[it.first+1]);
            }
        }
        return res;
    }
};
