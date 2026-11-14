class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j, count = 1, prev = nums[0];
        j = 1;
        for(i=1; i<nums.size(); i++){
            if(j != i){
                nums[j] = nums[i];
            }
            if(nums[i] != prev){
                count = 1;
                prev = nums[i];
            }else{
                count++;
            }
            if(count <= 2){
                j++;
            }
        }
        return j;
    }
};
