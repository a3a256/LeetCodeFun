class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if(nums.size() == 2){return true;}
        bool flag = false;
        int i, j;
        for(i=0; i<=nums.size()-(k*2); i++){
            flag = true;
            for(j=i; j<i+k; j++){
                if(j>i){
                    if(nums[j] <= nums[j-1] || nums[j+k] <= nums[(j+k)-1]){
                        flag = false;
                    }
                }
            }
            if(flag){return true;}
        }
        return false;
    }
};
