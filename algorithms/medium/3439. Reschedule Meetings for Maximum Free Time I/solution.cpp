class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int i;
        vector<int> free_time;
        free_time.push_back(startTime[0]-0);
        for(i=0; i<endTime.size()-1; i++){
            free_time.push_back(startTime[i+1]-endTime[i]);
        }
        free_time.push_back(eventTime-endTime.back());
        int j, total = 0, temp = 0;
        for(j=0; j<=k; j++){
            temp += free_time[j];
        }
        total = max(total, temp);
        i = 0;
        while(j<free_time.size()){
            temp -= free_time[i];
            temp += free_time[j];
            total = max(total, temp);
            j++;
            i++;
        }
        return total;
    }
};
