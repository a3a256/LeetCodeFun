class Solution {
public:
    set<string> st;
    set<string> dp;
    vector<string> res;
    void solve(string s, string line){
        if(s.size() == 0){
            if(line[line.size()-1] == ' '){
                line.pop_back();
            }
            res.push_back(line);
            return;
        }
        if(dp.count(s)){
            line += s;
            res.push_back(line);
            return;
        }
        for(int i=0; i<s.size(); i++){
            string l = s.substr(0, i+1);
            if(st.count(l)){
                solve(s.substr(i+1), line+l+' ');
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for(string k: wordDict){
            st.insert(k);
        }
        solve(s, "");
        return res;
    }
};
