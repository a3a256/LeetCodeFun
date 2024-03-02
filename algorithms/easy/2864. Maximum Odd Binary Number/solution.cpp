class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        map<char, int> mp;
        int i;
        for(i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        string line = "";
        while(mp['1'] > 1){
            line += '1';
            mp['1']--;
        }
        for(i=0; i<mp['0']; i++){
            line += '0';
        }
        line += '1';
        return line;
    }
};
