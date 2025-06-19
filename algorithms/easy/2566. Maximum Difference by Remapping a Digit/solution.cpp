class Solution {
public:
    int minMaxDifference(int num) {
        vector<int> nums;
        int n = num;
        while(n>0){
            nums.push_back(n%10);
            n /= 10;
        }
        int minimal = 0, coef = 1, maximal=0, i, minimal_to_replace;
        for(i=nums.size()-1; i>-1; i--){
            if(nums[i] < 9){
                minimal_to_replace = nums[i];
                break;
            }
        }
        for(i=0; i<nums.size(); i++){
            if(nums[i] == minimal_to_replace){
                maximal += 9*coef;
            }else{
                maximal += nums[i]*coef;
            }
            coef *= 10;
        }
        coef = 1;
        for(i=0; i<nums.size(); i++){
            if(nums[i] == nums.back()){
                minimal += 0*coef;
            }else{
                minimal += nums[i]*coef;
            }
            coef *= 10;
        }
        return maximal - minimal;
    }
};
