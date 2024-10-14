class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int i;
        map<int, vector<int>> mp;
        priority_queue<int> q;
        long long res = 0;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
            q.push(nums[i]);
        }
        int top, pos;
        for(i=0; i<k; i++){
            top = q.top();
            res += (long long)top;
            pos = mp[top].back();
            mp[top].pop_back();
            q.pop();
            top = (top%3 == 0)?(ceil(top/3)):(ceil(top/3)+1);
            q.push(top);
            mp[top].push_back(pos);
        }

        return res;
    }
};
