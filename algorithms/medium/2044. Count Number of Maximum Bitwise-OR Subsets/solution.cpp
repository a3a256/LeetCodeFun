class Solution {
public:
    void solve(vector<int>& nums, int pos, int cur, int biggest, int &count){
        if(cur == biggest){
            count ++;
        }
        int i;
        for(i=pos; i<nums.size(); i++){
            solve(nums, i+1, cur | nums[i], biggest, count);
        }
        
    }


    int countMaxOrSubsets(vector<int>& nums) {
        int biggest_or = nums[0];
        int i, j;
        for(i=1; i<nums.size(); i++){
            biggest_or = biggest_or | nums[i];
        }
        int count = 0;
        solve(nums, 0, 0, biggest_or, count);
        return count;
    }
};
