class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros = 0, ones = 0;
        int i, j = 0, res = 0;
        for(i=0; i<nums.size(); i++){
            zeros += nums[i] == 0;
            ones += nums[i] == 1;
            if(zeros <= k){
                res = max(res, zeros+ones);
            }else{
                while(zeros > k && j<i){
                    ones -= nums[j] == 1;
                    zeros -= nums[j] == 0;
                    j++;
                }
            }
        }
        return res;
    }
};
