class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int ans = 0;
        while(total%k != 0){
            ans++;
            total -= 1;
        }
        return ans;
    }
};
