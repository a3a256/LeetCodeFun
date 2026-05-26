class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char, int> up, lo;
        for(char c: word){
            if(c == tolower(c)){
                lo[c]++;
            }else{
                up[c]++;
            }
        }
        int count = 0;
        for(auto it: lo){
            if(up[toupper(it.first)] != 0){
                count++;
            }
        }
        return count;
    }
};
