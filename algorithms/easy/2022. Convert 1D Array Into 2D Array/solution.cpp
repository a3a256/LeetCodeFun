class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res(m, vector<int>(n, 0));
        int i, j, k;
        k = 0;
        if(original.size() != (m*n)){
            return {};
        }
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                res[i][j] = original[k];
                k ++;
            }
        }

        return res;
    }
};
