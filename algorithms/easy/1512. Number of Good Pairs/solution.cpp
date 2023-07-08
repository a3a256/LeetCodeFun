class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int , vector<int>> mp;
        int i;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }

        int count = 0;
        for(auto it: mp){
            for(i=1; i<it.second.size(); i++){
                count += it.second.size()-i;
            }
        }

        return count;
    }
};
