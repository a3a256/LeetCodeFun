class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        float first_distance, second_distance, third_distance, diff, temp;
        diff = (float)points[1][0] - (float)points[0][0];
        temp = diff*diff;
        diff = (float)points[1][1] - (float)points[0][1];
        temp += diff*diff;
        first_distance = sqrt(temp);
        diff = (float)points[2][0] - (float)points[0][0];
        temp = diff*diff;
        diff = (float)points[2][1] - (float)points[0][1];
        temp += diff*diff;
        second_distance = sqrt(temp);
        diff = (float)points[2][0] - (float)points[1][0];
        temp = diff*diff;
        diff = (float)points[2][1] - (float)points[1][1];
        temp += diff*diff;
        third_distance = sqrt(temp);
        float p = (first_distance + second_distance + third_distance)/(float)2;
        float area = sqrt(p*(p-first_distance)*(p-second_distance)*(p-third_distance));
        return area > 0.0f;
    }
};
