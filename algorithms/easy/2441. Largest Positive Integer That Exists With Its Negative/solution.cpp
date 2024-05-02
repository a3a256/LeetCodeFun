class Solution {
public:
    int findMaxK(vector<int>& nums) {
        priority_queue<int> q;
        map<int, int> mp;
        for(int i: nums){
            if(i>0){
                q.push(i);
            }else{
                mp[abs(i)] = 1;
            }
        }
        while(!q.empty()){
            if(mp[q.top()] == 1){
                return q.top();
            }
            q.pop();
        }
        return -1;
    }
};
