class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich = 0;
        int cur_sum;
        for(auto i: accounts){
            cur_sum = accumulate(i.begin(), i.end(), 0);
            rich = max(cur_sum, rich);
        }

        return rich;
    }
};
