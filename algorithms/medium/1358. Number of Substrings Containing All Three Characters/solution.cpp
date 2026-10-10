class Solution {
public:
    int numberOfSubstrings(string s) {
        int i, j, res;
        j = 0;
        i = 0;
        res = 0;
        map<char, int> mp;
        while(j<s.size()){
            mp[s[j]]++;
            while(mp['a'] >= 1 && mp['b'] >= 1 && mp['c'] >= 1){
                res += s.size()-j;
                mp[s[i]]--;
                i++;
            }
            j++;
        }
        return res;
    }
};
