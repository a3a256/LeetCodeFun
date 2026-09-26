class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size() < 3){return 0;}
        int i, count = 0;
        for(i=2; i<s.size(); i++){
            if(s[i] != s[i-1] && s[i] != s[i-2] && s[i-1] != s[i-2]){count++;}
        }
        return count;
    }
};
