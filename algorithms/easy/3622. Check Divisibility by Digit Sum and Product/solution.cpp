class Solution {
public:
    bool checkDivisibility(int n) {
        int sums = 0, mult = 1, cur = n;
        while(cur!=0){
            sums += cur%10;
            mult *= cur%10;
            cur /= 10;
        }
        return n%(sums+mult) == 0;
    }
};
