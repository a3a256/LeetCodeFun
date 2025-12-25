class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total = accumulate(apple.begin(), apple.end(), 0);
        priority_queue<int> q;
        for(int i: capacity){
            q.push(i);
        }
        int count = 0, cur_sum = 0;
        while(cur_sum < total){
            cur_sum += q.top();
            count++;
            q.pop();
        }
        return count;
    }
};
