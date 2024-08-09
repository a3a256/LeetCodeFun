class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size() < 3 || grid[0].size() < 3){
            return 0;
        }
        int i, j, k, l, diag, reverse_diag, count, row, col;
        bool magic;
        count = 0;
        for(i=0; i<=grid.size()-3; i++){
            for(j=0; j<=grid[i].size()-3; j++){
                set<int> nums;
                set<int> sums;
                magic = true;
                for(k=0; k<3; k++){
                    row = 0;
                    col = 0;
                    for(l=0; l<3; l++){
                        if(grid[i+k][j+l] < 1 || grid[i+k][j+l] > 9){
                            magic = false;
                            break;
                        }else{
                            nums.insert(grid[i+k][j+l]);
                        }
                        row += grid[i+k][j+l];
                        col += grid[i+l][j+k];
                    }
                    sums.insert(row);
                    sums.insert(col);
                }
                diag = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
                reverse_diag = grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j];
                sums.insert(diag);
                sums.insert(reverse_diag);
                if(magic && nums.size() == 9 && sums.size() == 1){
                    count ++;
                }
            }
        }
        return count;
    }
};
