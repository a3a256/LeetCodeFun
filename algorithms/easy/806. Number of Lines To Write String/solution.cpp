class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        string alp = "abcdefghijklmnopqrstuvwxyz";
        map<char, int> mp;
        int i, line, lines;
        for(i=0; i<alp.size(); i++){
            mp[alp[i]] = widths[i];
        }
        lines = 0;
        line = 0;
        for(i=0; i<s.size(); i++){
            line += mp[s[i]];
            if(line>100){
                lines++;
                line = mp[s[i]];
            }
        }
        if(line>0){
            lines++;
        }
        return {lines, line};
    }
};
