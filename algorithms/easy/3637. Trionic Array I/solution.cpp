class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        if(nums.size() == 3){return false;}
        int i = 1, j = nums.size()-2;
        for(i=1; i<nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                break;
            }
        }
        i--;
        for(j=nums.size()-2; j>-1; j--){
            if(nums[j] >= nums[j+1]){
                break;
            }
        }
        j++;
        if(i == 0 || j == nums.size() - 1){
            return false;
        }
        if(i >= j){
            return false;
        }
        int k;
        for(k=i+1; k<=j; k++){
            if(nums[k] >= nums[k-1]){
                return false;
            }
        }
        return true;
    }
};
