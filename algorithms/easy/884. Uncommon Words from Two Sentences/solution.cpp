class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int i;
        string s = "";
        map<string, int> mp;
        for(i=0; i<s1.size(); i++){
            if(s1[i] != ' '){
                s += s1[i];
            }else{
                mp[s]++;
                s = "";
            }
        }
        if(s.size() != 0){
            mp[s]++;
            s = "";
        }
        for(i=0; i<s2.size(); i++){
            if(s2[i] != ' '){
                s += s2[i];
            }else{
                mp[s]++;
                s = "";
            }
        }
        if(s.size() != 0){
            mp[s]++;
            s = "";
        }
        vector<string> res;
        for(auto it: mp){
            if(it.second == 1){
                res.push_back(it.first);
            }
        }
        return res;
    }
};
