class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> cop;
        cop = prices;
        int i, diff = 0;
        for(i=cop.size()-2; i>-1; i--){
            cop[i] = max(cop[i], cop[i+1]);
        }
        for(i=0; i<prices.size(); i++){
            diff = max(diff, cop[i] - prices[i]);
        }
        return diff;
    }
};
