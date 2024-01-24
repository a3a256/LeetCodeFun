class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        int i, j, total;
        total = 0;
        for(i=0; i<indices.size(); i++){
            for(j=0; j<n; j++){
                grid[indices[i][0]][j]++;
            }
            for(j=0; j<m; j++){
                grid[j][indices[i][1]]++;
            }
        }
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(grid[i][j]%2 != 0){
                    total++;
                }
            }
        }
        return total;
    }
};
