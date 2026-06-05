class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int res = 0;
        sort(cost.begin(), cost.end());
        int i;
        for(i=cost.size()-1; i>-1; i-=3){
            if(i>-1){res += cost[i];}
            if(i-1>-1){res += cost[i-1];}
        }
        return res;
    }
};
