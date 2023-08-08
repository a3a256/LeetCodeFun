class Solution {
public:
    vector<vector<int>> res;
    void solve(vector<int>& arr, vector<int>& nums, int start, int target){
        int sum, i;
        sum = accumulate(arr.begin(), arr.end(), 0);
        if(sum == target){
            res.push_back(arr);
            return;
        }
        if(sum>target){
            return;
        }
        for(i=start; i<nums.size(); i++){
            arr.push_back(nums[i]);
            solve(arr, nums, i, target);
            arr.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        solve(temp, candidates, 0, target);
        return res;
    }
};
