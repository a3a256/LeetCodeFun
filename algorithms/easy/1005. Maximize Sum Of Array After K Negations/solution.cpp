class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> q;
        int i, value, _sum;
        for(i=0; i<nums.size(); i++){
            q.push(nums[i]);
        }
        for(i=0; i<k; i++){
            value = q.top();
            q.pop();
            q.push(value*(-1));
        }
        _sum = 0;
        while(q.size() != 0){
            _sum += q.top();
            q.pop();
        }
        return _sum;
    }
};
