class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        map<int, int> mp;
        int min_val = INT_MAX;
        int max_val = 0;
        for(int i: nums){
            mp[i]++;
            min_val = min(i, min_val);
            max_val = max(i, max_val);
        }
        vector<int> res;
        while(min_val <= max_val){
            if(mp[min_val] == 0){res.push_back(min_val);}
            min_val++;
        }
        return res;
    }
};
