class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        map<int, vector<int>> mp;
        int i, val, count;
        for(i=0; i<g.size(); i++){
            mp[g[i]].push_back(i);
        }
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        count = 0;
        for(i=g.size()-1; i>-1; i--){
            if(s.size() != 0){
                val = s.back();
                if(val >= g[i]){
                    count++;
                    s.pop_back();
                }
            }
        }
        return count;
    }
};
