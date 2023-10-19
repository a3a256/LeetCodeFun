class Solution {
public:
    string clear(string s){
        int i, j;
        for(i=0; i<s.size(); i++){
            if(s[i] == '#'){
                j = i-1;
                while(j>-1){
                    if(s[j] != '#'){
                        s[j] = '#';
                        break;
                    }
                    j--;
                }
            }
        }
        s.erase(remove(s.begin(), s.end(), '#'), s.end());
        return s;
    }
    bool backspaceCompare(string s, string t) {
        return clear(s) == clear(t);
    }
};
