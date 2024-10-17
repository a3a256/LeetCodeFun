class Solution {
public:
    int maximumSwap(int num) {
        vector<int> v, backup;
        vector<vector<int>> matrix;
        int i, j, n, temp;
        n = num;
        while(n>0){
            v.push_back(n%10);
            n = n/10;
        }
        reverse(v.begin(), v.end());
        for(i=0; i<v.size()-1; i++){
            for(j=i+1; j<v.size(); j++){
                if(v[i] < v[j]){
                    backup = v;
                    temp = backup[i];
                    backup[i] = backup[j];
                    backup[j] = temp;
                    matrix.push_back(backup);
                }
            }
        }
        int coef, res;
        for(i=0; i<matrix.size(); i++){
            res = 0;
            coef = 1;
            for(j=matrix[i].size()-1; j>-1; j--){
                res += matrix[i][j]*coef;
                coef = coef*10;
            }
            num = max(num, res);
        }
        return num;
    }
};
