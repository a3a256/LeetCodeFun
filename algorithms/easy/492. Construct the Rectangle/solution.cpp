class Solution {
public:
    vector<int> constructRectangle(int area) {
        int i, temp, diff, l=0, w=0;
        diff = INT_MAX;
        for(i=1; i<=area; i++){
            temp = area/i;
            if(temp*i == area){
                if(abs(temp-i) < diff){
                    diff = abs(temp-i);
                    l = max(temp, i);
                    w = min(temp, i);
                }
            }
        }
        return {l, w};
    }
};
