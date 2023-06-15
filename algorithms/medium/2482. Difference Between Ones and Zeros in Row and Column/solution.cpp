class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m, n;
        m = grid.size();
        n = grid[0].size();
        map<int, pair<int, int>> row_count;
        vector<vector<int>> res(m, vector<int>(n, 0));
        map<int, pair<int, int>> col_count;
        int i, j;
        for(i=0; i<m; i++){
            row_count[i].first = 0;
            row_count[i].second = 0;
            for(j=0; j<n; j++){
                if(grid[i][j] == 0){
                    row_count[i].first++;
                }else{
                    row_count[i].second++;
                }
            }
        }

        for(i=0; i<n; i++){
            col_count[i].first = 0;
            col_count[i].second = 0;
            for(j=0; j<m; j++){
                if(grid[j][i] == 0){
                    col_count[i].first++;
                }else{
                    col_count[i].second++;
                }
            }
        }

        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                res[i][j] = row_count[i].second + col_count[j].second - row_count[i].first - col_count[j].first;
            }
        }

        return res;
    }
};
