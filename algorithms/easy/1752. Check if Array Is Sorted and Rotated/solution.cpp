class Solution {
public:
    bool check(vector<int>& nums) {
        int i, count;
        count = 0;
        for(i=1; i<nums.size(); i++){
            if(nums[i] < nums[i-1]){
                count++;
            }
        }
        if(nums.back() > nums[0]){
            count++;
        }
        if(count > 1){
            return false;
        }
        return true;
    }
};
