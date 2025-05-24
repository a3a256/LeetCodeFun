class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int i;
        vector<int> res;
        for(i=0; i<words.size(); i++){
            if(words[i].find(x) != string::npos){
                res.push_back(i);
            }
        }
        return res;
    }
};
