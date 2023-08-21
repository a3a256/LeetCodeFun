class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string repeated, sub;
        int i, j, n;
        n = s.size();
        for(i=1; i<=n/2; i++){
            if(n%i == 0){
                sub = s.substr(0, i);
                repeated = "";
                for(j=0; j<n/i; j++){
                    repeated += sub;
                }
                if(repeated == s){
                    return true;
                }
            }
        }
        return false;
    }
};
