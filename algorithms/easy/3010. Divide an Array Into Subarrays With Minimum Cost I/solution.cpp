class Solution {
public:
    int minimumCost(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int> >q;
        int i;
        for(i=1; i<nums.size(); i++){q.push(nums[i]);}
        int total = 0;
        total += nums[0];
        total += q.top();
        q.pop();
        total += q.top();
        return total;
    }
};
