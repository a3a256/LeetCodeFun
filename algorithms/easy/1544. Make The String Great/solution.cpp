class Solution {
public:
    string makeGood(string s) {
        int i=0, length;
        length = s.size();
        while(i<length-1){
            if(tolower(s[i]) == tolower(s[i+1]) && s[i] != s[i+1]){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                length -= 2;
                i=0;
            }else{
                i++;
            }
        }
        return s;
    }
};
