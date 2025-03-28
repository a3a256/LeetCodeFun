class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int i, j, mid, count, diff;
        vector<int> line;
        for(i=0; i<grid.size(); i++){
            for(j=0; j<grid[i].size(); j++){
                line.push_back(grid[i][j]);
            }
        }
        sort(line.begin(), line.end());
        mid = line.size()/2;
        count = 0;
        for(i=0; i<line.size(); i++){
            diff = abs(line[i] - line[mid]);
            if(diff%x != 0){
                return -1;
            }
            count += diff/x;
        }
        return count;
    }
};
