class Solution {
public:
    int countTriples(int n) {
        int i, j, c, s, res;
        res = 0;
        for(i=1; i<n; i++){
            for(j=1; j<n; j++){
                if(i!=j){
                    c = i*i + j*j;
                    s = (int)sqrt(c);
                    if(c == s*s && s<=n){
                        res++;
                    }
                }
            }
        }
        return res;
    }
};
