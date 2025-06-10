class Solution {
public:
    int maxDifference(string s) {
        map<char, int> mp;
        int max_diff = INT_MIN, diff = 0;
        for(char c: s){
            mp[c]++;
        }
        for(auto it: mp){
            if(it.second%2 != 0){
                for(auto ti: mp){
                    if(ti.second%2 == 0){
                        diff = it.second - ti.second;
                        max_diff = max(diff, max_diff);
                    }
                }
            }
        }
        return max_diff;
    }
};
