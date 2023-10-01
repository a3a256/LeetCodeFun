class Solution {
public:
    string reverseWords(string s) {
        int i, start;
        start = 0;
        for(i=0; i<s.size(); i++){
            if(s[i] == ' '){
                reverse(s.begin()+start, s.begin()+i);
                start = i+1;
            }
        }
        if(s.back() != ' '){
            reverse(s.begin()+start, s.end());
        }
        return s;
    }
};
