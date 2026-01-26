class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        priority_queue<int> q, d;
        for(int i: arr){
            q.push(i);
            d.push(i);
        }
        int cur = q.top();
        q.pop();
        int smallest_diff = INT_MAX;
        while(!q.empty()){
            smallest_diff = min(smallest_diff, cur - q.top());
            cur = q.top();
            q.pop();
        }
        vector<vector<int>> res;
        cur = d.top();
        d.pop();
        while(!d.empty()){
            if(cur - d.top() == smallest_diff){
                res.push_back({d.top(), cur});
            }
            cur = d.top();
            d.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
