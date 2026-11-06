class Solution {
public:
    bool judgeSquareSum(int c) {
        long long end = sqrt(c);
        long long start = 0;
        long long res;
        while(start <= end){
            res = (start*start) + (end*end);
            if(res < c){
                start++;
            }else if(res == c){
                return true;
            }else{
                end--;
            }
        }
        return false;
    }
};
