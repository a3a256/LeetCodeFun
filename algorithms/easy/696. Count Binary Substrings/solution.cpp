class Solution {
public:
    int countBinarySubstrings(string s) {
        int zeros = 0, ones = 0, i, res = 0;
        char prev = s[0];
        for(i=0; i<s.size(); i++){
            if(s[i] != prev){
                if(zeros != 0 && ones != 0){
                    res += min(zeros, ones);
                    if(prev == '1'){zeros = 0;}
                    if(prev == '0'){ones = 0;}
                }
            }
            if(s[i] == '0'){zeros++;}
            if(s[i] == '1'){ones++;}
            prev = s[i];
        }
        res += min(zeros, ones);
        return res;
    }
};
