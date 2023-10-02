class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size() == 0){
            return m*n;
        }
        int row, col, i;
        row = INT_MAX;
        col = INT_MAX;
        for(i=0; i<ops.size(); i++){
            row = min(ops[i][0], row);
            col = min(ops[i][1], col);
        }
        return row*col;
    }
};
