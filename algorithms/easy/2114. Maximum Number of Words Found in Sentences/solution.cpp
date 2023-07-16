class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int i, count, words;
        words = 0;
        for(string s: sentences){
            count = 0;
            for(char c: s){
                if(c == ' '){
                    count += 1;
                }
            }
            words = max(count+1, words);
        }

        return words;
    }
};
