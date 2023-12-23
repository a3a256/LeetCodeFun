class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int, int>, int> mp = {{{0, 0}, 1}};
        int x, y, i;
        x = 0;
        y = 0;
        for(i=0; i<path.size(); i++){
            if(path[i] == 'N'){
                y++;
            }else if(path[i] == 'E'){
                x++;
            }else if(path[i] == 'S'){
                y--;
            }else if(path[i] == 'W'){
                x--;
            }
            if(mp[{x, y}] != 0){
                return true;
            }else{
                mp[{x, y}]++;
            }
        }
        return false;
    }
};
