class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        map<int, int> mp, qp;
        for(int i: nums){
            mp[i]++;
        }
        for(auto it: mp){
            qp[it.second]++;
        }
        for(int i: nums){
            if(qp[mp[i]] == 1){return i;}
        }
        return -1;
    }
};
