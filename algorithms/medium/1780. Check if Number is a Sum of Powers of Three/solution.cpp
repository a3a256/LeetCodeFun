class Solution {
public:
    bool checkPowersOfThree(int n) {
        int cur, i;
        for(i=16; i>-1; i--){
            cur = pow(3, i);
            if(n>=cur){
                n -= cur;
            }
        }
        return n==0;
    }
};
