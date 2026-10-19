class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        int i, j = -1;
        for(i=0; i<nums.size(); i++){
            if(j == -1){
                if(nums[i] == val){
                    j = i;
                }
            }else{
                if(nums[i] != val){
                    nums[j] = nums[i];
                    j++;
                }
            }
        }
        return (j == -1)?nums.size():j;
    }
};
