class Solution {
public:
    string reverseWords(string s) {
        while(s.back() == ' '){
            s.pop_back();
        }
        reverse(s.begin(), s.end());
        int i, j = 0;
        s += ' ';
        for(i=1; i<s.size(); i++){
            if(s[i] == ' ' && s[i-1] != ' '){
                reverse(s.begin()+j, s.begin()+i);
            }else if(s[i] != ' ' && s[i-1] == ' '){
                j = i;
            }
        }
        while(s.back() == ' '){
            s.pop_back();
        }
        j = 0;
        int space = 0;
        for(i=0; i<s.size(); i++){
            if(j != i){
                s[j] = s[i];
            }
            if(s[i] != ' '){
                space = 0;
                j++;
            }else{
                space++;
                if(space < 2){
                    j++;
                }
            }
        }
        s.resize(j);
        return s;
    }
};
