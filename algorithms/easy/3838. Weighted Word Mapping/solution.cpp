class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int val;
        string res = "";
        for(int i=0; i<words.size(); i++){
            val = 0;
            for(char t: words[i]){
                val += weights[(int)t - 'a'];
            }
            res += 'z' - val%26;
        }
        return res;
    }
};
