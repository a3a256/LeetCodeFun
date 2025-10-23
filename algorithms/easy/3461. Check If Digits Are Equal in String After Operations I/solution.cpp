class Solution {
public:
    bool hasSameDigits(string s) {
        int i, x, y;
        string temp;
        while(s.size() > 2){
            temp = "";
            for(i=1; i<s.size(); i++){
                x = (int)s[i-1] - '0';
                y = (int)s[i] - '0';
                temp += to_string((x+y)%10);
            }
            s = temp;
        }
        return s[0] == s[1];
    }
};
