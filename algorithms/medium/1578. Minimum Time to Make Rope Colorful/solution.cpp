class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i, count, j, temp, big;
        count = 0;
        i = 1;
        while(i<colors.size()){
            if(colors[i] == colors[i-1]){
                j = i-1;
                temp = 0;
                big = 0;
                while(j<colors.size() && colors[j] == colors[i-1]){
                    big = max(big, neededTime[j]);
                    temp += neededTime[j];
                    j++;
                }
                count += (temp - big);
                i = j;
            }else{
                i++;
            }
        }
        return count;
    }
};
