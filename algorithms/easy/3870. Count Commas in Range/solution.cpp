class Solution {
public:
    int countCommas(int n) {
        int i;
        int count = 0;
        for(i=1000; i<=n; i++){
            if(i/1000 >= 1){
                count++;
            }
        }
        return count;
    }
};
