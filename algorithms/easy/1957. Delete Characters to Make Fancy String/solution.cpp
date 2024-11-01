class Solution {
public:
    string makeFancyString(string s) {
        if(s.size() < 3){
            return s;
        }
        string v = "";
        v += s[0];
        v += s[1];
        int i;
        for(i=2; i<s.size(); i++){
            if(s[i] == v[v.size()-1] && s[i] == v[v.size()-2]){
                v.erase(v.begin()+v.size()-2);
            }
            v += s[i];
        }
        return v;
    }
};
