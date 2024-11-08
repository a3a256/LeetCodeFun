class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int i, max_val, cur;
        cur = 0;
        max_val = (int)pow(2, maximumBit)-1;
        for(i=0; i<nums.size(); i++){
            cur = cur^nums[i];
            nums[i] = max_val^cur;
        }
        reverse(nums.begin(), nums.end());
        return nums;
    }
};
