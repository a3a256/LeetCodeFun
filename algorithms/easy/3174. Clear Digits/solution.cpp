class Solution {
public:
    string clearDigits(string s) {
        string line = "";
        int cur = 0;
        for(char c: s){
            cur = (int)c - 48;
            if(cur >= 0 && cur <= 9){
                line.pop_back();
            }else{
                line += c;
            }
        }
        return line;
    }
};
