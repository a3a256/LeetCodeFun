class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int i, j, cur;
        for(i=0; i<k; i++){
            cur = *min_element(nums.begin(), nums.end());
            for(j=0; j<nums.size(); j++){
                if(nums[j] == cur){
                    nums[j] = nums[j]*multiplier;
                    break;
                }
            }
        }
        return nums;
    }
};
