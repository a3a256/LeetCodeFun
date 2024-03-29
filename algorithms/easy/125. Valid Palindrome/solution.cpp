class Solution {
public:
    bool isPalindrome(string s) {
        map<char, int> mp = {{'a', 1}, {'b', 1}, {'c', 1}, {'d', 1}, {'e', 1}, {'f',1},{'g',1},
                            {'h', 1},{'i',1},{'j',1},{'k',1},{'l',1},{'m',1},{'n',1},
                            {'o',1},{'p',1},{'q',1},{'r',1},{'s',1},{'t',1},{'u',1},{'v',1},
                            {'w',1},{'x',1},{'y',1},{'z',1},{'1',1},{'2',1},{'3',1},{'4',1},
                            {'5',1},{'6',1},{'7',1},{'8',1},{'9',1},{'0',1}};
        string line="";
        int i, j;
        for(i=0; i<s.size(); i++){
            if(mp[tolower(s[i])] == 1){
                line += tolower(s[i]);
            }
        }
        if(line.size() < 1){
            return true;
        }
        i=0;
        j = line.size()-1;
        while(i<j){
            if(line[i] != line[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
