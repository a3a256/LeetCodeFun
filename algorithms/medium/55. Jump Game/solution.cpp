class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums[0] == 0){
            if(nums.size() == 1){return true;}else{return false;}
        }
        int i, j, first_zero = -1, last_zero = -1, max_in_between = -1, next, min_boundary = -1, max_boundary = -1;
        for(i=0; i<nums.size()-1; i++){
            if(nums[i] == 0){
                if(first_zero != -1){
                    last_zero = i;
                }else{
                    first_zero = i;
                }
            }
        }
        if(first_zero == -1){return true;}
        for(i=first_zero-1; i>-1; i--){
            if(nums[i]+i > first_zero){
                if(last_zero == -1){return true;}
                if(i+nums[i] > last_zero){return true;}
                if(nums[i]+i >= nums.size()-1){return true;}
                max_in_between = max(max_in_between, nums[i]+i);
            }
        }
        if(max_in_between == -1){return false;}
        for(i=max_in_between;i>first_zero;i--){if(nums[i] != 0){min_boundary = i;}}
        if(min_boundary == -1){return false;}else{
            for(i=last_zero-1; i>=min_boundary; i--){if(nums[i]+i>last_zero){max_boundary=i;}}
        }
        if(max_boundary == -1){return false;}else if(max_boundary == min_boundary){return true;}
        i = max_boundary;
        while(i>min_boundary){
            next = -1;
            for(j=i-1; j>first_zero; j--){
                if(nums[j]+j >= i){
                    next = j;
                }
            }
            if(next == -1){return false;}
            i = next;
        }
        return true;
    }
};
