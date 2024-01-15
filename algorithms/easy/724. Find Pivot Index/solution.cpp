class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i, left, right;
        left = 0;
        right = accumulate(nums.begin(), nums.end(), 0);
        for(i=0; i<nums.size(); i++){
            if(i>0){
                right -= nums[i-1];
                left += nums[i-1];
            }
            if(left == right-nums[i]){
                return i;
            }
        }

        return -1;
    }
};
