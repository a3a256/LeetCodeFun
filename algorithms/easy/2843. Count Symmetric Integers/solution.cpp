class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int i, j, n, count, first, second, total;
        total = 0;
        for(i=low; i<=high; i++){
            n = i;
            count = 0;
            while(n>0){
                n = n/10;
                count++;
            }
            if(count%2 == 0){
                n = i;
                j = 0;
                first = 0;
                second = 0;
                while(n>0){
                    if(j<(count/2)){
                        first += n%10;
                    }else{
                        second += n%10;
                    }
                    n = n/10;
                    j++;
                }
                if(first == second){
                    total++;
                }
            }
        }
        return total;
    }
};
