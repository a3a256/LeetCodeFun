class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>stk;
        for(string s: words){
            for(string sk: words){
                if(sk != s && sk.size() < s.size()){
                    if(s.find(sk) != string::npos){
                        stk.insert(sk);
                    }
                }
            }
        }
        vector<string> v;
        for(auto it: stk){
            v.push_back(it);
        }
        return v;
    }
};
