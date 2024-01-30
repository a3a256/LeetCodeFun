class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stk;
        int num=0, one, two, res;
        for(string s: tokens){
            if(s == "+" || s == "-" || s == "/" || s == "*"){
                one = stk.back();
                stk.pop_back();
                two = stk.back();
                stk.pop_back();
                res = 0;
                if(s[0] == '+'){
                    res = two+one;
                }else if(s[0] == '-'){
                    res = two-one;
                }else if(s[0] == '*'){
                    res = two*one;
                }else if(s[0] == '/'){
                    res = two/one;
                }
                stk.push_back(res);
            }else{
                stk.push_back(stoi(s));
            }
        }
        return stk.back();
    }
};
