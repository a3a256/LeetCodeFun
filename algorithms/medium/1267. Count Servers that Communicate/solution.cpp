class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int i, j, count;
        count = 0;
        map<int, int> rows, cols;
        for(i=0; i<grid.size(); i++){
            for(j=0; j<grid[i].size(); j++){
                rows[i] += grid[i][j];
                cols[j] += grid[i][j];
            }
        }
        for(i=0; i<grid.size(); i++){
            for(j=0; j<grid[i].size(); j++){
                if(grid[i][j] == 1){
                    if(rows[i] > 1 || cols[j] > 1){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
