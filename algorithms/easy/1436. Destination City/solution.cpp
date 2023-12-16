class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, int> mp;
        int i;
        for(i=0; i<paths.size(); i++){
            mp[paths[i][0]]++;
            mp[paths[i][1]]++;
        }
        for(i=0; i<paths.size(); i++){
            if(mp[paths[i][1]] == 1){
                return paths[i][1];
            }
        }
        return "";
    }
};
