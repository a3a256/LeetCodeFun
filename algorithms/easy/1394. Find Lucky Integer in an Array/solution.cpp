class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        for(int i: arr){
            mp[i]++;
        }
        int res = -1;
        for(auto it: mp){
            if(it.first == it.second){
                res = max(it.first, res);
            }
        }
        return res;
    }
};
