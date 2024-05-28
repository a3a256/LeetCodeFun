class Solution {
public:
    int specialArray(vector<int>& nums) {
        int i, j, count;
        for(i=0; i<=nums.size(); i++){
            count = 0;
            for(j=0; j<nums.size(); j++){
                if(nums[j] >= i){
                    count++;
                }
            }
            if(count == i){
                return count;
            }
        }
        return -1;
    }
};
