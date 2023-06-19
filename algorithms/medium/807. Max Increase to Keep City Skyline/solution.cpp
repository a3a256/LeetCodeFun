class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int i, j, m, n, increase, new_height;
        increase = 0;
        m = grid.size();
        n = grid[0].size();
        vector<int> rows(m, 0), cols(n, 0);
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                rows[i] = max(rows[i], grid[i][j]);
            }
        }

        for(j=0; j<n; j++){
            for(i=0; i<m; i++){
                cols[j] = max(cols[j], grid[i][j]);
            }
        }

        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                new_height = min(rows[i], cols[j]);
                increase += new_height - grid[i][j];
                grid[i][j] = new_height;
            }
        }

        return increase;
    }
};
