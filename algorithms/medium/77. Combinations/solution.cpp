class Solution {
public:
    vector<vector<int>> res;
    void solve(int num, int end, int lim, vector<int>& arr){
        if(arr.size() == lim){
            res.push_back(arr);
            return;
        }
        for(int i=num; i<=end; i++){
            arr.push_back(i);
            solve(i+1, end, lim, arr);
            arr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> arr;
        solve(1, n, k, arr);
        return res;
    }
};
