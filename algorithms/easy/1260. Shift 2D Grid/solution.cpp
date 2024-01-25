class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int i, j, value, m;
        m = grid.size();
        for(i=0; i<k; i++){
            value = grid.back().back();
            for(j=0; j<m-1; j++){
                grid[j].insert(grid[j].begin()+0, value);
                value = grid[j].back();
                grid[j].pop_back();
            }
            grid[j].insert(grid[j].begin()+0, value);
            grid[j].pop_back();
        }
        return grid;
    }
};
