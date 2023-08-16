class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size(), i=0;
        priority_queue<pair<int, int>> q;
        vector<int> res(n-k+1, 0);
        while(i<k){
            q.push({nums[i], i});
            i++;
        }
        res[0] = q.top().first;
        while(i<n){
            while(!q.empty() && q.top().second <= i-k){
                q.pop();
            }
            q.push({nums[i], i});
            res[i-k+1] = q.top().first;
            i ++;
        }
        return res;
    }
};
