class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int> mp;
        int i, j, n;
        n = (int)grid.size();
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                mp[grid[i][j]]++;
            }
        }
        vector<int> res = {0, 0};
        for(i=0; i<(n*n)+1; i++){
            if(mp[i] == 0){
                res[1] = i;
            }else if(mp[i] > 1){
                res[0] = i;
            }
        }
        return res;
    }
};
