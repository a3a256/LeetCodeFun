class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int, int> mp;
        bool unique = false;
        int i, j, sum, res;
        sum = 0;
        res = 0;
        i = 0;
        j = 0;
        while(j<nums.size()){
            mp[nums[j]]++;
            sum += nums[j];
            if(mp[nums[j]] > 1){
                while(mp[nums[j]] > 1){
                    mp[nums[i]]--;
                    sum -= nums[i];
                    i++;
                }
            }
            res = max(sum, res);
            j++;
        }
        return res;
    }
};
