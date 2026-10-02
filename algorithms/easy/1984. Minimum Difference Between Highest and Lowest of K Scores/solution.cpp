class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k == 1){return 0;}
        sort(nums.begin(), nums.end());
        int i = 0, j = k-1;
        int res = INT_MAX;
        while(j<nums.size()){
            res = min(res, abs(nums[j] - nums[i]));
            i++;
            j++;
        }
        return res;
    }
};
