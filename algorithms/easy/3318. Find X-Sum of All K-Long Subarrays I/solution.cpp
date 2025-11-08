class Solution {
public:

    struct cmp{
        inline bool operator() (pair<int, int> &a, pair<int, int> &b){
            if(a.second != b.second){
                return a.second > b.second;
            }
            return a.first > b.first;
        }
    };

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int i, j;
        map<int, int> mp;
        for(i=0; i<k; i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v;
        vector<int> res;
        int total;
        for(i=k; i<nums.size(); i++){
            for(auto it: mp){
                v.push_back({it.first, it.second});
            }
            sort(v.begin(), v.end(), cmp());
            total = 0;
            for(j=0; j<min(x, (int)v.size()); j++){
                total += v[j].first * v[j].second;
            }
            res.push_back(total);
            vector<pair<int, int>>().swap(v);
            mp[nums[i-k]]--;
            mp[nums[i]]++;
        }
        for(auto it: mp){
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end(), cmp());
        total = 0;
        for(j=0; j<min(x, (int)v.size()); j++){
            total += v[j].first * v[j].second;
        }
        res.push_back(total);
        vector<pair<int, int>>().swap(v);
        return res;
    }
};
