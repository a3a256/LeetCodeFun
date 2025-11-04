class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i, j, row, col;
        for(i=0; i<8; i++){
            for(j=0; j<8; j++){
                if(board[i][j] == 'R'){row = i; col = j;}
            }
        }
        int count = 0;
        for(i=col+1; i<8; i++){
            if(board[row][i] == 'p'){
                count++;
                break;
            }else if(board[row][i] == 'B'){
                break;
            }
        }
        for(i=col-1; i>-1; i--){
            if(board[row][i] == 'p'){
                count++;
                break;
            }else if(board[row][i] == 'B'){
                break;
            }
        }
        for(i=row+1; i<8; i++){
            if(board[i][col] == 'p'){
                count++;
                break;
            }else if(board[i][col] == 'B'){
                break;
            }
        }
        for(i=row-1; i>-1; i--){
            if(board[i][col] == 'p'){
                count++;
                break;
            }else if(board[i][col] == 'B'){
                break;
            }
        }
        return count;
    }
};
