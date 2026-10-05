class Solution {
public:
    int scoreOfParentheses(string s) {
        if(s == "()"){return 1;}
        if(s.size() == 0){return 0;}
        string a = "", b = "";
        int i, o = 0, c = 0;
        for(i=0; i<s.size(); i++){
            if(s[i] == '('){o++;}
            else{c++;}
            a += s[i];
            if(o == c){break;}
        }
        i++;
        while(i<s.size()){
            b += s[i];
            i++;
        }
        int res = 0;
        if(a.size() > 2){
            a.erase(a.begin()+0);
            a.pop_back();
            res += 2*scoreOfParentheses(a);
        }else{
            res += scoreOfParentheses(a);
        }
        res += scoreOfParentheses(b);
        return res;
    }
};
