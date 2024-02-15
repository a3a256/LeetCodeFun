class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        priority_queue<long> q;
        long _sum = 0, i, diff;
        for(i=0; i<nums.size(); i++){
            _sum += nums[i];
            q.push(nums[i]);
        }
        diff = _sum - q.top();
        while(q.top() >= diff && q.size() >= 3){
            _sum -= q.top();
            q.pop();
            diff = _sum - q.top();
        }
        if(q.size()<3){
            return -1;
        }
        return _sum;
    }
};
