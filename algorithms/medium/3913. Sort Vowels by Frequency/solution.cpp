class Solution {
public:
    struct cmp{
        inline bool operator() (pair<char, pair<int, int>> &a, pair<char, pair<int, int>> &b){
            if(a.second.second == b.second.second){
                return a.second.first < b.second.first;
            }
            return a.second.second > b.second.second;
        }
    };
    string sortVowels(string s) {
        map<char, int> mp, qp;
        qp = {{'a', -1}, {'e', -1}, {'i', -1}, {'o', -1}, {'u', -1}};
        int i;
        for(i=0; i<s.size(); i++){
            if(qp.find(s[i]) != qp.end()){
                mp[s[i]]++;
                if(qp[s[i]] == -1){qp[s[i]] = i;}
            }
        }
        vector<pair<char, pair<int, int>>> res;
        for(auto it: qp){
            if(it.second != -1){
                res.push_back({it.first, {it.second, mp[it.first]}});
            }
        }
        sort(res.begin(), res.end(), cmp());

        int cur = 0;

        for(i=0; i<s.size(); i++){
            if(qp.find(s[i]) != qp.end()){
                s[i] = res[cur].first;
                res[cur].second.second -= 1;
                if(res[cur].second.second == 0){
                    cur++;
                }
            }
        }

        return s;
    }
};
