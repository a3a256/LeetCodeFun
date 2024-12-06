class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        map<int, int> mem;
        int i;
        for(i=0; i<banned.size(); i++){
            mem[banned[i]]++;
        }
        int _sum = 0, count = 0;
        for(i=1; i<=n; i++){
            if(mem[i] < 1){
                _sum += i;
                count++;
                if(_sum > maxSum){
                    _sum -= i;
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};
