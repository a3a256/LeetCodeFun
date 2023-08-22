class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        char c;
        while(columnNumber > 0){
            columnNumber --;
            c = 'A' + columnNumber%26;
            res = c+res;
            columnNumber /= 26;
        }
        return res;
    }
};
