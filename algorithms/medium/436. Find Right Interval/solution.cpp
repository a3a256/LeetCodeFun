class Solution {
public:
    struct {
        inline bool operator() (vector<int> &a, vector<int> &b){
            return a[0] < b[0];
        }
    }cmp;

    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int i;
        for(i=0; i<intervals.size(); i++){
            intervals[i].push_back(i);
        }

        sort(intervals.begin(), intervals.end(), cmp);

        vector<int> res(intervals.size(), -1);

        int start, end, mid, cur;
        bool found;
        for(i=0; i<intervals.size(); i++){
            start = 0;
            end = intervals.size()-1;
            found = false;
            cur = -1;
            while(start <= end){
                mid = (start+end)/2;
                if(intervals[mid][0] >= intervals[i][1]){
                    found = true;
                    cur = mid;
                    if(intervals[mid][0] == intervals[i][1]){
                        break;
                    }
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }
            if(found){
                res[intervals[i][2]] = intervals[cur][2];
            }
        }
        return res;
    }
};
