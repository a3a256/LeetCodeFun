class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int i, j, right, left, count;
        count = 0;
        for(i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                right = 0;
                for(j=i+1; j<nums.size(); j++){
                    if(nums[j] != 0){right+=nums[j];}
                }
                left = 0;
                for(j=i-1; j>-1; j--){
                    if(nums[j] != 0){left+=nums[j];}
                }
                if(abs(right - left) == 0){
                    count += 2;
                }else if(abs(right - left) == 1){
                    count++;
                }
            }
        }
        return count;
    }
};
