class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        map<int, vector<int>> mp;
        int i, j;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        int count = 0;
        for(auto it: mp){
            for(i=0; i<it.second.size()-1; i++){
                for(j=i+1; j<it.second.size(); j++){
                    if((it.second[i]*it.second[j])%k == 0){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
