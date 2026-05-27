class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char, int> up, lo;
        int i;
        char c;
        for(i=0; i<word.size(); i++){
            c = word[i];
            if(c == tolower(c)){
                lo[c] = i;
            }
        }
        for(i=word.size()-1; i>-1; i--){
            if(word[i] == toupper(word[i])){
                up[word[i]] = i;
            }
        }
        int count = 0;
        for(auto it: lo){
            if(up.find(toupper(it.first)) != up.end()){
                if(it.second < up[toupper(it.first)]){
                    count++;
                }
            }
        }
        return count;
    }
};
