class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        map<int, vector<int>> mp;
        int i, j, distance;
        for(i=0; i<rows; i++){
            for(j=0; j<cols; j++){
                distance = abs(rCenter - i) + abs(cCenter - j);
                mp[distance].push_back(i);
                mp[distance].push_back(j);
            }
        }
        vector<vector<int>> v;
        for(auto it: mp){
            for(i=1; i<it.second.size(); i+=2){
                v.push_back({it.second[i-1], it.second[i]});
            }
        }
        return v;
    }
};
