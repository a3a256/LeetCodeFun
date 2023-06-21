class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int vmax = 0;
        int i;
        vector<int> xs;
        for(i=0; i<points.size(); i++){
            xs.push_back(points[i][0]);
        }
        
        sort(xs.begin(), xs.end());
        for(i=1; i<xs.size(); i++){
            vmax = max(vmax, xs[i]-xs[i-1]);
        }

        return vmax;
    }
};
