class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> gq;
        for(int i: nums){
            gq.push(i);
        }
        long long steps = 0, x, y, val;
        while(gq.size() >= 2 && gq.top() < k){
            x = gq.top();
            gq.pop();
            y = gq.top();
            gq.pop();
            val = min(x, y)*2+max(x, y);
            gq.push(val);
            steps++;
        }
        return steps;
    }
};
