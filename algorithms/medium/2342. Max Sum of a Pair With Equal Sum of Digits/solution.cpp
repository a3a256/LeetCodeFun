class Solution {
public:
    int maximumSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int, vector<int>> mp;
        int i, j, total;
        for(i=0; i<nums.size(); i++){
            j = nums[i];
            total = 0;
            while(j>0){
                total += j%10;
                j = j/10;
            }
            mp[total].push_back(nums[i]);
        }
        int max_val = -1;
        for(auto it: mp){
            if(it.second.size() >= 2){
                max_val = max(max_val, it.second[it.second.size()-2] + it.second.back());
            }
        }
        return max_val;
    }
};
