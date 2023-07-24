class Solution {
public:
    double solve(double x, int n){
        if(n == 0){
            return 1;
        }
        double temp = solve(x, n/2);
        temp *= temp;
        if(n%2 == 0){
            return temp;
        }
        return temp*x;
    }
    double myPow(double x, int n) {
        double res = solve(x, abs(n));
        if(n<0){
            return 1/res;
        }
        return res;
    }
};
