class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros, ones, twos, index, i;
        ones = 0;
        zeros = 0;
        twos= 0;
        for(i=0; i<nums.size(); i++){
            if(nums[i] == 0){zeros++;}
            if(nums[i] == 1){ones++;}
            if(nums[i] == 2){twos++;}
        }
        index = 0;
        for(i=0; i<zeros; i++){
            nums[index] = 0;
            index ++;
        }
        for(i=0; i<ones; i++){
            nums[index] = 1;
            index ++;
        }
        for(i=0; i<twos; i++){
            nums[index] = 2;
            index ++;
        }
    }
};
