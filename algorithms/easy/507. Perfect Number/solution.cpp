class Solution {
public:
    bool checkPerfectNumber(int num) {
        int n = num, val = 0, i;
        val = 0;
        for(i=1; i<=num/2; i++){
            if(num%i == 0){
                val += i;
            }
        }
        return val == num;
    }
};
