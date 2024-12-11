class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i, j, diff, res;
        res = 0;
        i = 0;
        j = 0;
        while(j<nums.size()){
            diff = nums[j] - nums[i];
            if(diff > 2*k){
                i++;
            }else{
                res = max(res, (j-i)+1);
                j++;
            }
        }
        return res;
    }
};
