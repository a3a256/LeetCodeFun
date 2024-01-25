class Solution {
public:
    int balancedStringSplit(string s) {
        map<char, int> mp = {{'R', 0}, {'L', 0}};
        int i, count;
        count = 0;
        for(i=0; i<s.size(); i++){
            mp[s[i]]++;
            if(mp['L'] == mp['R']){
                count++;
                mp['L'] = 0;
                mp['R'] = 0;
            }
        }
        return count;
    }
};
