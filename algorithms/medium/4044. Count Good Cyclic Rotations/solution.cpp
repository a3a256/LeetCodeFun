class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long total = accumulate(nums.begin(), nums.end(), 0LL);
        int i, n = nums.size();
        int start = 0, end = n/2;
        long long first_half = accumulate(nums.begin(), nums.begin()+end, 0LL);
        end--;
        long long second_half = total - first_half;
        int count = first_half > second_half;
        for(i=1; i<n; i++){
            first_half -= nums[start];
            start = (start+1)%n;
            end = (end+1)%n;
            first_half += nums[end];
            second_half = total - first_half;
            count += first_half > second_half;
        }
        return count;
    }
};
