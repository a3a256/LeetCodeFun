class Solution {
public:
    vector<vector<int>> res;
    void solve(int sum, int i, vector<int>& arr, vector<int>& cur, int target){
        if(sum == target){
            res.push_back(cur);
            return;
        }
        if(sum>target){
            return;
        }
        if(i>=arr.size()){
            return;
        }
        for(int j=i; j<arr.size(); j++){
            if(j>i && arr[j]==arr[j-1]) continue;
            if(arr[j]>target)break;
            cur.push_back(arr[j]);
            solve(sum+arr[j], j+1, arr, cur, target);
            cur.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> cur;
        solve(0, 0, candidates, cur, target);
        return res;
    }
};
