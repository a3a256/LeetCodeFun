class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int> mp;
        for(char c: allowed){
            mp[c]++;
        }
        int count = 0;
        bool allow = true;
        for(string s: words){
            allow = true;
            for(char c: s){
                if(mp[c] != 1){
                    allow = false;
                    break;
                }
            }
            if(allow){
                count++;
            }
        }
        return count;
    }
};
