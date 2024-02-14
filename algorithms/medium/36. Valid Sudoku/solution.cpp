class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, int> rows, cols, cell;
        int i, j, k, l;
        for(i=0; i<9; i++){
            for(j=0; j<9; j++){
                if(board[j][i] != '.'){
                    if(cols[board[j][i]] != 0){
                        return false;
                    }
                    cols[board[j][i]]++;
                }
                if(board[i][j] != '.'){
                    if(rows[board[i][j]] != 0){
                        return false;
                    }
                    rows[board[i][j]]++;
                }
            }
            rows.clear();
            cols.clear();
        }
        for(i=0; i<9; i+=3){
            for(j=0; j<9; j+=3){
                for(k=i; k<i+3; k++){
                    for(l=j; l<j+3; l++){
                        if(board[k][l] != '.'){
                            if(cell[board[k][l]] != 0){
                                return false;
                            }
                            cell[board[k][l]]++;
                        }
                    }
                }
                cell.clear();
            }
        }
        return true;
    }
};
