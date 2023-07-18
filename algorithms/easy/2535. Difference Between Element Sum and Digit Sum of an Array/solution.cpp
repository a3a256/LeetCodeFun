class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int i, num, dig=0;
        for(i=0; i<nums.size(); i++){
            num = nums[i];
            while(num>0){
                dig += num%10;
                num = num/10;
            }
        }
        return abs(sum-dig);
    }
};
