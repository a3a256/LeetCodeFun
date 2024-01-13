class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m, n, i, j, index;
        m = mat.size();
        n = mat[0].size();
        if((m == r && n == c) || (n*m != r*c)){
            return mat;
        }
        vector<int> flat;
        vector<vector<int>> res(r, vector<int>(c, 0));
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                flat.push_back(mat[i][j]);
            }
        }
        index = 0;
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                res[i][j] = flat[index];
                index++;
            }
        }
        return res;
    }
};
