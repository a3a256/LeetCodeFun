class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int i, count, n;
        count = 0;
        map<pair<int, int>, int> mp;
        for(i=0; i<dominoes.size(); i++){
            mp[{min(dominoes[i][0], dominoes[i][1]), max(dominoes[i][0], dominoes[i][1])}]++;
        }
        for(auto it: mp){
            n = it.second - 1;
            if(n != 0){
                count += ((1+n)*n)/2;
            }
        }
        return count;
    }
};
