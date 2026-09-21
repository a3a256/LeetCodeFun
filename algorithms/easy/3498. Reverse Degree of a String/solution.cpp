class Solution {
public:
    int reverseDegree(string s) {
        int total, rev, i;
        total = 0;
        for(i=0; i<s.size(); i++){
            rev = s[i] - 'a';
            rev = 26 - rev;
            total += rev*(i+1);
        }
        return total;
    }
};
