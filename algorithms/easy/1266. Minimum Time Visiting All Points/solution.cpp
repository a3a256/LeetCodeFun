class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int x_coef, y_coef, i, seconds, x, y, x1, y1;
        seconds = 0;
        for(i=1; i<points.size(); i++){
            x = points[i-1][0];
            x1 = points[i][0];
            y = points[i-1][1];
            y1 = points[i][1];
            while(x != x1 || y != y1){
                if(x>x1){x_coef=-1;}else if(x == x1){x_coef=0;}else{x_coef=1;}
                if(y>y1){y_coef=-1;}else if(y == y1){y_coef=0;}else{y_coef=1;}
                x += x_coef;
                y += y_coef;
                seconds++;
            }
        }
        return seconds;
    }
};
