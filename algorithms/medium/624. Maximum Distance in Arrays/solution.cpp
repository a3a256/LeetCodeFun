class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int min_val, max_val, distance, i;
        min_val = arrays[0][0];
        max_val = arrays[0].back();
        distance = 0;
        for(i=1; i<arrays.size(); i++){
            distance = max(distance, abs(max_val - arrays[i][0]));
            distance = max(distance, abs(arrays[i].back() - min_val));
            min_val = min(arrays[i][0], min_val);
            max_val = max(arrays[i].back(), max_val);
        }

        return distance;
    }
};
