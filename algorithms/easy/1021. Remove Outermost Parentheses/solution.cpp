class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int opening = 0;
        for(char c: s){
            if(c == '('){
                if(opening > 0){
                    res += c;
                }
                opening ++;
            }else{
                opening --;
                if(opening > 0){
                    res += c;
                }
            }
        }
        return res;
    }
};
