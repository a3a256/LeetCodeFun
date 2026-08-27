class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int i: nums){mp[i]++;}
        int cur = k;
        while(mp[cur] != 0){
            cur += k;
        }
        return cur;
    }
};
