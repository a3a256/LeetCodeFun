class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> one(n), two(n);
        one[0] = nums[0];
        int i;
        for(i=1; i<n; i++){
            one[i] = max(nums[i], one[i-1]);
        }
        two[n-1] = nums[n-1];
        for(i=n-2; i>-1; i--){
            two[i] = max(nums[i], two[i+1]);
        }
        long long cur, val;
        cur = 0;
        for(i=1; i<n-1; i++){
            val = 1LL*(one[i-1]-nums[i])*two[i+1];
            cur = max(cur, val);
        }
        return cur;
    }
};
