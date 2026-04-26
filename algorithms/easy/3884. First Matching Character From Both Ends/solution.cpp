class Solution {
public:
    int firstMatchingIndex(string s) {
        int i;
        for(i=0; i<s.size(); i++){
            if(s[i] == s[s.size()-1-i]){return i;}
        }
        return -1;
    }
};
