class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        if(brokenLetters.size() == 26){return 0;}
        map<char, int> mp;
        for(char c: brokenLetters){
            mp[c]++;
        }
        int good_words = 0;
        bool allow = true;
        for(char c: text){
            if(c == ' '){
                if(allow){good_words++;}
                allow = true;
            }else{
                if(mp[c] == 1){
                    allow = false;
                }
            }
        }
        if(allow){good_words++;}
        return good_words;
    }
};
