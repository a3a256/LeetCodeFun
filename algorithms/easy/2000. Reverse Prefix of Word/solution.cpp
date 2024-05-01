class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index, i;
        index = -1;
        for(i=0; i<word.size(); i++){
            if(word[i] == ch){
                index = i;
                break;
            }
        }
        if(index == -1){
            return word;
        }
        reverse(word.begin(), word.begin()+index+1);
        return word;
    }
};
