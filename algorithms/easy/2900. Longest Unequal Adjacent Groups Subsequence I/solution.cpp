class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int i, prev;
        vector<string> res;
        prev = groups[0];
        res.push_back(words[0]);
        for(i=1; i<groups.size(); i++){
            if(groups[i] != prev){
                prev = groups[i];
                res.push_back(words[i]);
            }
        }
        return res;
    }
};
