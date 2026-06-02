class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int i, j, end, fastest;
        fastest = INT_MAX;
        for(i=0; i<landStartTime.size(); i++){
            end = landStartTime[i] + landDuration[i];
            for(j=0; j<waterStartTime.size(); j++){
                if(end >= waterStartTime[j]){
                    fastest = min(fastest, end + waterDuration[j]);
                }else{
                    fastest = min(fastest, waterStartTime[j] + waterDuration[j]);
                }
            }
        }
        for(i=0; i<waterStartTime.size(); i++){
            end = waterStartTime[i] + waterDuration[i];
            for(j=0; j<landStartTime.size(); j++){
                if(end >= landStartTime[j]){
                    fastest = min(fastest, end + landDuration[j]);
                }else{
                    fastest = min(fastest, landStartTime[j] + landDuration[j]);
                }
            }
        }
        return fastest;
    }
};
