class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string> mp;
        int i;
        for(i=0; i<knowledge.size(); i++){
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        bool open = false;
        string res = "", key = "";
        for(i=0; i<s.size(); i++){
            if(s[i] == '('){
                open = true;
            }else if(s[i] == ')'){
                open = false;
                if(mp.find(key) != mp.end()){
                    res += mp[key];
                }else{
                    res += '?';
                }
                key = "";
            }else{
                if(open){
                    key += s[i];
                }else{
                    res += s[i];
                }
            }
        }
        return res;
    }
};
