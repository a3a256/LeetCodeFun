class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> winners;
        map<int, int> losers;
        int i;
        for(i=0; i<matches.size(); i++){
            winners[matches[i][0]]++;
            losers[matches[i][1]]++;
        }
        vector<int> undefeated, one_loss;
        for(auto it: winners){
            if(losers[it.first] == 0){
                undefeated.push_back(it.first);
            }
        }
        for(auto it: losers){
            if(it.second == 1){
                one_loss.push_back(it.first);
            }
        }
        return {undefeated, one_loss};
    }
};
