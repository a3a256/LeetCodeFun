class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int min_val = *min_element(nums.begin(), nums.end());
        int max_val = *max_element(nums.begin(), nums.end());
        long long res = ((long long)max_val - (long long)min_val)*k;
        return res;
    }
};
