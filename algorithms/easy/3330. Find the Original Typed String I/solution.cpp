class Solution {
public:
    int possibleStringCount(string word) {
        int res = 1, i;
        for(i=1; i<word.size(); i++){
            if(word[i] == word[i-1]){
                res++;
            }
        }
        return res;
    }
};
