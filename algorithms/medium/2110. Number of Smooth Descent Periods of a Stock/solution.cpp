class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long i, count, res;
        count = 1;
        res = 0;
        for(i=1; i<prices.size(); i++){
            if(prices[i-1] - prices[i] == 1){
                count++;
            }else{
                res += ((count+1)*count)/2;
                count = 1;
            }
        }
        res += ((count+1)*count)/2;
        return res;
    }
};
