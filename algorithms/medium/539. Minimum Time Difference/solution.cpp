class Solution {
public:
    int time_to_mins(string s){
        int hours = (((int)s[0]-48)*10+((int)s[1]-48))*60;
        int minutes = ((int)s[3]-48)*10+((int)s[4]-48);
        return hours+minutes;
    }

    int findMinDifference(vector<string>& timePoints) {
        vector<int> q;
        for(string s: timePoints){
            int minutes = time_to_mins(s);
            q.push_back(minutes);
        }
        sort(q.begin(), q.end());
        int i, j, len = INT_MAX;
        for(i=q.size()-1; i>0; i--){
            for(j=i-1; j>-1; j--){
                len = min(q[i]-q[j], len);
                len = min(1440-q[i] + q[j], len);
            }
        }
        return len;
    }
};
