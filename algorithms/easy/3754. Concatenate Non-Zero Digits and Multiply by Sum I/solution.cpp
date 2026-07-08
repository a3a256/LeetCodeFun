class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x, sum, coef;
        x = 0;
        sum = 0;
        coef = 1;
        while(n > 0){
            if(n%10 != 0){x = coef*(n%10) + x;coef *= 10;}
            sum += n%10;
            n /= 10;
        }
        return x*sum;
    }
};
