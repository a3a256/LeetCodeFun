class Solution {
public:
    struct less_than_key{
        inline bool operator() (const vector<int>& one, const vector<int>& two){
            return one[0]<two[0];
        }
    };
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        stack<vector<int>> stk;
        sort(intervals.begin(), intervals.end(), less_than_key());
        int i;
        for(i=0; i<intervals.size(); i++){
            if(stk.empty()){
                stk.push(intervals[i]);
            }else{
                if(stk.top()[1]>=intervals[i][0]){
                    if(stk.top()[1]<=intervals[i][1]){
                        stk.top()[1] = intervals[i][1];
                    }
                }else{
                    stk.push(intervals[i]);
                }
            }
        }
        vector<vector<int>> res;
        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
    int countDays(int days, vector<vector<int>>& meetings) {
        meetings = merge(meetings);
        int i, res = 0;
        for(i=0; i<meetings.size()-1; i++){
            res += meetings[i+1][0] - meetings[i][1] - 1;
        }
        res += meetings[0][0] - 1;
        res += days - meetings.back()[1];
        return res;
    }
};
