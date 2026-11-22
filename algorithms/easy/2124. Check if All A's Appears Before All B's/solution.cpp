class Solution {
public:
    bool checkString(string s) {
        int change = 0, i;
        for(i=1; i<s.size(); i++){
            if(s[i] != s[i-1]){
                change++;
            }
        }
        return (change == 0)? (true):(change == 1 && s[0] == 'a');
    }
};
