class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int, set<int>> mp;
        for(auto v: logs){
            mp[v[0]].insert(v[1]);
        }
        vector<int>res(k, 0);
        for(auto it: mp){
            if(it.second.size()-1 < k){
                res[it.second.size()-1] ++;
            }
        }

        return res;
    }
};
