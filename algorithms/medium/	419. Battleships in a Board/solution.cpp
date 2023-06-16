class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int i, j, k, count;
        count = 0;
        for(i=0; i<board.size(); i++){
            for(j=0; j<board[0].size(); j++){
                if(board[i][j] == 'X'){
                    for(k=j; k<board[0].size(); k++){
                        if(board[i][k] == '.'){
                            break;
                        }else{
                            board[i][k] = '.';
                        }
                    }
                    for(k=i+1; k<board.size(); k++){
                        if(board[k][j] == '.'){
                            break;
                        }else{
                            board[k][j] = '.';
                        }
                    }
                    count ++;
                }
            }
        }

        // for(i=0; i<board.size(); i++){
        //     for(j=0; j<board[0].size(); j++){
        //         cout << board[i][j] << " ";
        //     }
        //     cout << "\n";
        // }

        return count;
    }
};
