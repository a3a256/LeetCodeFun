class Solution {
public:
    unordered_map<string, bool> dp;
    bool solve(string s, unordered_set<string> mp){
        if(s.size() == 0){
            return true;
        }
        if(dp.find(s)!=dp.end()){
            return dp[s];
        }
        for(int i=0; i<s.size(); i++){
            string line = s.substr(0, i+1);
            if(mp.count(line)){
                if(solve(s.substr(i+1), mp)){
                    return dp[s] = true;
                }
            }
        }
        return dp[s] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st;
        for(string k: wordDict){
            st.insert(k);
        }
        return solve(s, st);
    }
};
