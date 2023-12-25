class Solution {
public:
    int maxScore(string s) {
        int ones = 0, zeros = 0, i, res;
        for(i=0; i<s.size(); i++){
            if(s[i] == '1'){
                ones++;
            }
        }
        res = INT_MIN;
        for(i=0; i<s.size()-1; i++){
            if(s[i] == '1'){
                ones--;
            }else{
                zeros++;
            }
            res = max(res, ones+zeros);
        }
        return res;
    }
};
