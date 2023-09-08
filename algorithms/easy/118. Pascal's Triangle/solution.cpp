class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1){
            return {{1}};
        }
        if(numRows == 2){
            return {{1}, {1, 1}};
        }
        vector<vector<int>> res = {{1}, {1, 1}};
        int i, j;
        for(i=2; i<numRows; i++){
            res.push_back(vector<int>(i+1, 1));
            for(j=1; j<i; j++){
                res[i][j] = res[i-1][j]+res[i-1][j-1];
            }
        }
        return res;
    }
};
