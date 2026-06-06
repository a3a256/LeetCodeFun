class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int right_sum = 0, left_sum = 0;
        int i;
        for(i=nums.size()-1; i>0; i--){
            right_sum += nums[i];
        }
        vector<int> res;
        for(i=0; i<nums.size(); i++){
            if(i > 0){
                right_sum -= nums[i];
            }
            res.push_back(abs(left_sum - right_sum));
            left_sum += nums[i];
        }
        return res;
    }
};
