class Solution {
public:
    int maxDiff(int num) {
        vector<int> nums;
        int n = num, i;
        while(n>0){
            nums.push_back(n%10);
            n = n/10;
        }
        int minimal_to_replace=-1, maximal_to_replace=-1;
        for(i=nums.size()-1; i>-1; i--){
            if(nums[i] < 9){
                minimal_to_replace = nums[i];
                break;
            }
        }
        for(i=nums.size()-1; i>-1; i--){
            if(nums[i] > 1){
                maximal_to_replace = nums[i];
                break;
            }
        }
        int minimal = 0, maximal = 0, coef;
        if(maximal_to_replace != -1){
            coef = 1;
            for(i=0; i<nums.size(); i++){
                if(nums[i] == maximal_to_replace){
                    if(maximal_to_replace != nums.back()){
                        minimal += 0*coef;
                    }else{
                        minimal += 1*coef;
                    }
                }else{
                    minimal += nums[i]*coef;
                }
                coef *= 10;
            }
        }else{
            minimal = num;
        }
        if(minimal_to_replace != -1){
            coef = 1;
            for(i=0; i<nums.size(); i++){
                if(nums[i] == minimal_to_replace){
                    maximal += 9*coef;
                }else{
                    maximal += nums[i]*coef;
                }
                coef *= 10;
            }
        }else{
            maximal = num;
        }
        return maximal - minimal;
    }
};
