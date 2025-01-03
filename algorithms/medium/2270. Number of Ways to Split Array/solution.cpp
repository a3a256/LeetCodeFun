class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long i, left, right, count;
        count = 0;
        left = 0;
        right = accumulate(nums.begin(), nums.end(), 0LL);
        for(i=0; i<nums.size()-1; i++){
            left += (long long)nums[i];
            right -= (long long)nums[i];
            if(left >= right){
                count++;
            }
        }
        return count;
    }
};
