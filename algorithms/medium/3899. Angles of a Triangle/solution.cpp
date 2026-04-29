#define PI 3.1415926535897932

class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        double a = (double)sides[0], b = (double)sides[1], c = (double)sides[2];
        double angle_a, angle_b, angle_c;
        vector<double> res;
        angle_a = acos((a*a - b*b - c*c)/((-2.0f)*b*c)) * 180.0/PI;
        angle_b = acos((b*b - a*a - c*c)/((-2.0f)*a*c)) * 180.0/PI;
        angle_c = acos((c*c - a*a - b*b)/((-2.0f)*a*b)) * 180.0/PI;
        if(angle_a == 0.0f || angle_b == 0.0f || angle_c == 0.0f){return {};}
        if(angle_a != angle_a || angle_b != angle_b || angle_c != angle_c){return {};}
        res.push_back(angle_a);
        res.push_back(angle_b);
        res.push_back(angle_c);
        sort(res.begin(), res.end());
        return res;
    }
};
