class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operations = 0, i;
        for(i=2; i<nums.size(); i++){
            if(nums[i-2] == 0){
                operations++;
                nums[i-2] = 1;
                if(nums[i-1] == 0){
                    nums[i-1] = 1;
                }else{
                    nums[i-1] = 0;
                }
                if(nums[i] == 0){
                    nums[i] = 1;
                }else{
                    nums[i] = 0;
                }
            }
        }
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum == nums.size()){
            return operations;
        }
        return -1;
    }
};
