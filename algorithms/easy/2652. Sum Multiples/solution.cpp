class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0, i, j;
        for(i=1; i<=n; i++){
            for(j=3; j<=7; j+=2){
                if(i%j == 0){
                    sum += i;
                    break;
                }
            }
        }

        return sum;
    }
};
