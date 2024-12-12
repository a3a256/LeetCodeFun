class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q;
        int i, cur;
        for(i=0; i<gifts.size(); i++){
            q.push(gifts[i]);
        }
        for(i=0; i<k; i++){
            cur = q.top();
            cur = sqrt(cur);
            q.pop();
            q.push(cur);
        }
        long long res = 0;
        while(!q.empty()){
            res += (long long)q.top();
            q.pop();
        }
        return res;
    }
};
