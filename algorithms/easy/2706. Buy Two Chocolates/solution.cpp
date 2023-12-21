class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        priority_queue<int, vector<int>, greater<int>> q;
        int i, first, second;
        for(i=0; i<prices.size(); i++){
            q.push(prices[i]);
        }
        first = q.top();
        q.pop();
        if(first<money){
            second = q.top();
            q.pop();
            if(second<=money-first){
                return money-first-second;
            }
        }
        return money;
    }
};
