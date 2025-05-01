class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count, i, n, temp_count;
        count = 0;
        for(i=0; i<nums.size(); i++){
            n = nums[i];
            temp_count = 0;
            while(n>0){
                n = n/10;
                temp_count++;
            }
            if(temp_count%2 == 0){
                count++;
            }
        }
        return count;
    }
};
