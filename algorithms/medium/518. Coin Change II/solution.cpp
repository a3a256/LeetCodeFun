class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1, 0);
        dp[0] = 1;
        int j;
        for(int coin: coins){
            for(j=coin; j<=amount; j++){
                dp[j] += dp[j-coin];
            }
        }
        return dp[amount];
    }
};
