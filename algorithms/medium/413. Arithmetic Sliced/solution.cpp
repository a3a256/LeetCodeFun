class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3){return 0;}
        int diff = nums[1] - nums[0];
        int i, count;
        count = 2;
        float res, temp;
        res = 0.0;
        for(i=2; i<nums.size(); i++){
            if(nums[i] - nums[i-1] == diff){
                count++;
            }else{
                if(count >= 3){
                    temp = count - 3 + 1;
                    res += ((1+temp)/2)*temp;
                }
                diff = nums[i] - nums[i-1];
                count = 2;
            }
        }
        if(count >= 3){
            temp = count - 3 + 1;
            res += ((1+temp)/2)*temp;
        }
        return (int)res;
    }
};
