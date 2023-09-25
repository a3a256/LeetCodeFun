class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> mp;
        map<char, int> dp;
        for(char c: s){
            mp[c]++;
        }
        for(char c: t){
            dp[c]++;
        }
        for(auto it: dp){
            if(mp[it.first] == 0 || mp[it.first] != it.second){
                return it.first;
            }
        }
        return '\0';
    }
};
