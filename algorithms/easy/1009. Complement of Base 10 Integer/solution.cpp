class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0){return 1;}
        int len, res;
        len = 0;
        res = 0;
        while(n>0){
            if(n%2 == 0){res += pow(2, len);}
            n /= 2;
            len++;
        }
        return res;
    }
};
