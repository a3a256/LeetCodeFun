class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0){
            return {1};
        }
        if(rowIndex == 1){
            return {1, 1};
        }
        vector<vector<int>> res = {{1}, {1, 1}};
        int i, j;
        for(i=2; i<=rowIndex; i++){
            res.push_back({1});
            for(j=1; j<i; j++){
                res[i].push_back(res[i-1][j-1]+res[i-1][j]);
            }
            res[i].push_back(1);
        }
        return res.back();
    }
};
