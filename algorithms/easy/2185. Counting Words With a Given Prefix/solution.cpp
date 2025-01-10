class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int i, count;
        count = 0;
        for(i=0; i<words.size(); i++){
            if(words[i].find(pref) == 0){
                count++;
            }
        }
        return count;
    }
};
