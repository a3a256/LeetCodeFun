class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> res;
        int start, i;
        start = 0;
        for(i=1; i<s.size(); i++){
            if(s[i] != s[i-1]){
                if(i-start>=3){
                    res.push_back({start, i-1});
                }
                start = i;
            }
        }
        if(i-start>=3){
            res.push_back({start, i-1});
        }
        return res;
    }
};
