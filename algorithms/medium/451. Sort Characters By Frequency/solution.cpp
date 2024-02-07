class Solution {
public:
    struct compare{
        inline bool operator() (pair<char, int> &a, pair<char, int> &b){
            if(a.second != b.second){
                return a.second>b.second;
            }
            return a.first>b.first;
        }
    };
    string frequencySort(string s) {
        map<char, int> mp;
        int i, j;
        for(i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        vector<pair<char, int>> v;
        for(auto it: mp){
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end(), compare());
        string line = "";
        for(i=0; i<v.size(); i++){
            line += string(v[i].second, v[i].first);
        }

        return line;
    }
};
