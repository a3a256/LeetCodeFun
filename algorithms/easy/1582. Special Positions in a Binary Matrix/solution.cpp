class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int i, j, m, n, index, _sum, res;
        res = 0;
        m = mat.size();
        n = mat[0].size();
        map<int, int> rows;
        for(i=0; i<m; i++){
            rows[i] = accumulate(mat[i].begin(), mat[i].end(), 0);
        }
        for(i=0; i<n; i++){
            _sum = 0;
            for(j=0; j<m; j++){
                _sum += mat[j][i];
                if(mat[j][i] == 1){
                    index = j;
                }
            }
            if(_sum == 1){
                if(rows[index] == 1){
                    res++;
                }
            }
        }
        return res;
    }
};
