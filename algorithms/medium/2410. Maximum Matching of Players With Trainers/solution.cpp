class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int count = 0;
        while(!players.empty() && !trainers.empty()){
            if(trainers.back() >= players.back()){
                count++;
                trainers.pop_back();
                players.pop_back();
            }else{
                players.pop_back();
            }
        }
        return count;
    }
};
