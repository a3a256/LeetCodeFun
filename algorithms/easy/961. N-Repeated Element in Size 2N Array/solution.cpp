class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n, i;
        n = (int)nums.size()/2;
        map<int, int> mp;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second == n){
                return it.first;
            }
        }
        return -1;
    }
};
