class Solution {
public:
    bool is_valid(string &val, string &alp){
        if(val.size() == 0){return false;}
        bool found;
        for(char c: val){
            found = false;
            for(char k: alp){
                if(c == k){found = true;}
            }
            if(!found){return false;}
        }
        return true;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        map<string, vector<string>> mp;
        int i;
        string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_";
        for(i=0; i<code.size(); i++){
            if(isActive[i] && is_valid(code[i], alp)){
                mp[businessLine[i]].push_back(code[i]);
            }
        }
        vector<string> res;
        vector<string> lines = {"electronics", "grocery", "pharmacy", "restaurant"};
        for(i=0; i<lines.size(); i++){
            if(mp[lines[i]].size() != 0){
                sort(mp[lines[i]].begin(), mp[lines[i]].end());
                res.insert(res.end(), mp[lines[i]].begin(), mp[lines[i]].end());
            }
        }
        return res;
    }
};
