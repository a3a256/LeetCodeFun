class Solution {
public:
    long long solver(vector<int>& nums, int bound, long long res = 0){
        int i = 0, j = nums.size()-1;
        while(i<j){
            if(nums[i] + nums[j] >= bound){
                res += (j-i);
                j--;
            }else{
                i++;
            }
        }
        return res;
    }

    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        return solver(nums, lower) - solver(nums, upper+1);
    }
};
