class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        map<char, int> mp, qp, tp;
        for(string s: words2){
            for(char c: s){
                tp[c]++;
            }
            for(auto it: tp){
                if(mp[it.first] == 0){
                    mp[it.first] = it.second;
                }else{
                    mp[it.first] = max(it.second, mp[it.first]);
                }
            }
            tp.clear();
        }
        bool correct;
        vector<string> res;
        for(string s: words1){
            for(char c: s){
                qp[c]++;
            }
            correct = true;
            for(auto it: mp){
                if(qp[it.first] < it.second){
                    correct = false;
                    break;
                }
            }
            if(correct){
                res.push_back(s);
            }
            qp.clear();
        }
        return res;
    }
};
