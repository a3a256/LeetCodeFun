class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> q;
        for(int i: nums){
            q.push(i);
        }
        int res = q.top()-1;
        q.pop();
        res *= (q.top()-1);
        return res;
    }
};
