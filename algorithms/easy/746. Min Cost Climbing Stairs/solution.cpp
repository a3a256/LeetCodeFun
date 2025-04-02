class Solution {
public:
    int solve(int i, vector<int>& cost, vector<int>& op, int n){
        if(i>=n){
            return 0;
        }
        if(op[i] != -1){
            return op[i];
        }
        int yes, no;
        yes = cost[i] + solve(i+1, cost, op, n);
        no = cost[i] + solve(i+2, cost, op, n);
        op[i] = min(yes, no);
        return op[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> v(cost.size(), -1);
        return min(solve(0, cost, v, cost.size()), solve(1, cost, v, cost.size()));
    }
};
