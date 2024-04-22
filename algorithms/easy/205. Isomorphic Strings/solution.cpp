class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mp;
        int i;
        for(i=0; i<s.size(); i++){
            if(mp.find(s[i]) != mp.end()){
                if(mp[s[i]] != t[i]){
                    return false;
                }
            }
            mp[s[i]] = t[i];
        }
        mp.clear();
        for(i=0; i<s.size(); i++){
            if(mp.find(t[i]) != mp.end()){
                if(mp[t[i]] != s[i]){
                    return false;
                }
            }
            mp[t[i]] = s[i];
        }
        return true;
    }
};
