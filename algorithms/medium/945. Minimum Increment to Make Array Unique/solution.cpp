class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> q;
        int i, val, count;
        for(i=0; i<nums.size(); i++){
            q.push(nums[i]);
        }
        vector<int> v;
        count = 0;
        while(!q.empty()){
            if(v.size() == 0){
                v.push_back(q.top());
            }else{
                if(q.top() <= v.back()){
                    val = v.back()+1 - q.top();
                    count += val;
                    v.push_back(v.back()+1);
                }else if(q.top() > v.back()){
                    v.push_back(q.top());
                }
            }
            q.pop();
        }
        return count;
    }
};
