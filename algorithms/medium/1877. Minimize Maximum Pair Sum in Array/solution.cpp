class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums.size()/2;
        int j = mid;
        int i = mid-1;
        int vsum = 0;
        while(i>-1 && j<nums.size()){
            vsum = max(vsum, nums[i]+nums[j]);
            i --;
            j ++;
        }

        return vsum;
    }
};
