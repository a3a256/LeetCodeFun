class Solution {
public:
    long long solve(int i, vector<vector<int>>& questions, vector<long long>& v, int n){
        if(i>=n){
            return 0;
        }
        if(v[i] != -1){
            return v[i];
        }
        long long cur, next;
        cur = questions[i][0] + solve(i+questions[i][1]+1, questions, v, n);
        next = solve(i+1, questions, v, n);
        v[i] = max(cur, next);
        return v[i];
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size(), -1);
        return solve(0, questions, dp, questions.size());
    }
};
