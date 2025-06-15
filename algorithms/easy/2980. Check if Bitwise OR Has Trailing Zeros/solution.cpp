class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int evens, i;
        evens = 0;
        for(i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                evens++;
            }
        }
        return evens > 1;
    }
};
