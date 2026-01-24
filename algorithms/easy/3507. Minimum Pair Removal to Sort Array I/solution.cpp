class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        bool sorted = false;
        int min_sum = 0, i, j, sum, pos, counter;
        counter = 0;
        while(!sorted){
            sorted = true;
            min_sum = INT_MAX;
            pos = -1;
            for(i=0; i<nums.size()-1; i++){
                if(nums[i] > nums[i+1]){sorted = false;}
                sum = nums[i] + nums[i+1];
                if(sum < min_sum){
                    pos = i;
                    min_sum = sum;
                }
            }
            if(sorted){break;}
            nums[pos] = min_sum;
            nums.erase(nums.begin()+pos+1);
            counter++;
        }
        return counter;
    }
};
