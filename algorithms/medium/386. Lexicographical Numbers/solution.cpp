class Solution {
public:
    vector<int> lexicalOrder(int n) {
        map<string, int> mp;
        int i;
        for(i=1; i<n+1; i++){
            mp[to_string(i)] = i;
        }
        vector<int> res;
        for(auto it: mp){
            res.push_back(it.second);
        }
        return res;
    }
};
