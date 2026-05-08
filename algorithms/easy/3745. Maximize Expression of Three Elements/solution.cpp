class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        priority_queue<int> q;
        for(int i: nums){q.push(i);}
        int a, b;
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        while(q.size() > 1){
            q.pop();
        }
        return a+b - q.top();
    }
};
