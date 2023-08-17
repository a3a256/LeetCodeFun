class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<pair<int, int>> zeros, ones;
        int i, j, m, n, vmin;
        m = mat.size();
        n = mat[0].size();
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(mat[i][j] == 0){
                    zeros.push_back({i, j});
                }else{
                    ones.push_back({i, j});
                }
            }
        }
        for(auto it: ones){
            vmin = INT_MAX;
            for(auto ti: zeros){
                vmin = min(vmin, abs(it.first-ti.first)+abs(it.second-ti.second));
            }
            mat[it.first][it.second] = vmin;
        }
        return mat;
    }
};
