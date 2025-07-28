class Solution {
public:
    int countHillValley(vector<int>& nums) {
        set<pair<int, int>> stk;
        int i, j, left, right;
        for(i=0; i<nums.size(); i++){
            left = -1;
            for(j=i-1; j>-1; j--){
                if(nums[j] != nums[i]){
                    left = j;
                    break;
                }
            }
            right = -1;
            for(j=i+1; j<nums.size(); j++){
                if(nums[j] != nums[i]){
                    right = j;
                    break;
                }
            }
            if(left != -1 && right != -1){
                if((nums[left] > nums[i] && nums[right] > nums[i]) || (nums[left] < nums[i] && nums[right] < nums[i])){
                    stk.insert({left, right});
                }
            }
        }
        return (int)stk.size();
    }
};
