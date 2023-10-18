class Solution {
public:
    map<char, pair<int, int>> mp = {{'U',{0, 1}}, {'D', {0, -1}}, {'R', {1, 0}}, {'L', {-1, 0}}};
    bool judgeCircle(string moves) {
        pair<int, int> cur = {0, 0};
        for(char c: moves){
            cur.first += mp[c].first;
            cur.second += mp[c].second;
        }

        return (cur.first == 0 && cur.second == 0);
    }
};
