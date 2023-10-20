class Solution {
public:
    int m, n;
    bool legit_move(int row, int col){
        return (row>=0 && row < m && col >= 0 && col < n);
    }
    int cell(vector<vector<int>> &grid, int row, int col){
        int moves = 0, i, count;
        count = 0;
        for(i=col-1; i<=col+1; i++){
            if(legit_move(row-1, i)){
                count += grid[row-1][i];
                moves++;
            }
            if(legit_move(row, i)){
                count += grid[row][i];
                moves++;
            }
            if(legit_move(row+1, i)){
                count += grid[row+1][i];
                moves++;
            }
        }
        return count/moves;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        m = img.size();
        n = img[0].size();
        vector<vector<int>> grid(m, vector<int>(n, 0));
        int i, j;
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                grid[i][j] = cell(img, i, j);
            }
        }

        return grid;
    }
};
