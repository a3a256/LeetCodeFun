class Solution {
public:
    struct compare{
        inline bool operator()(int a, int b){
            return a>b;
        }
    };
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int, int> mp;
        int i;
        for(i=0; i<score.size(); i++){
            mp[score[i]] = i;
        }
        vector<string> res(score.size(), "");
        sort(score.begin(), score.end(), compare());
        for(i=0; i<score.size(); i++){
            if(i == 0){
                res[mp[score[i]]] = "Gold Medal";
            }else if(i == 1){
                res[mp[score[i]]] = "Silver Medal";
            }else if(i == 2){
                res[mp[score[i]]] = "Bronze Medal";
            }else{
                res[mp[score[i]]] = to_string(i+1);
            }
        }
        return res;
    }
};
