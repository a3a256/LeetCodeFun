class Solution {
public:
    struct cmp{
        inline bool operator() (vector<int> &a, vector<int> &b){
            return a[1] < b[0];
        }
    };
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i;
        map<int, int> mp;
        for(i=0; i<intervals.size(); i++){
            if(newInterval[0] <= intervals[i][1] && newInterval[1] > intervals[i][1]){
                if(newInterval[0] > intervals[i][0]){
                    newInterval[0] = intervals[i][0];
                }
                mp[i]++;
            }else if(newInterval[1] >= intervals[i][0] && newInterval[0] < intervals[i][0]){
                if(newInterval[1] < intervals[i][1]){
                    newInterval[1] = intervals[i][1];
                }
                mp[i]++;
            }else if(newInterval[0] >= intervals[i][0] && newInterval[1] <= intervals[i][1]){
                return intervals;
            }
        }
        vector<vector<int>> res;
        for(i=0; i<intervals.size(); i++){
            if(mp[i] != 1){
                res.push_back(intervals[i]);
            }
        }
        res.push_back(newInterval);
        sort(res.begin(), res.end(), cmp());
        return res;
    }
};
