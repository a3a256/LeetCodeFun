class Solution {
public:
    int countEven(int num) {
        int i, n, temp, count;
        count = 0;
        for(i=1; i<=num; i++){
            n = i;
            temp = 0;
            while(n>0){
                temp += n%10;
                n/=10;
            }
            count += temp%2 == 0;
        }
        return count;
    }
};
