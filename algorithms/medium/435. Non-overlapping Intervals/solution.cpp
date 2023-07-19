class Solution {
public:
    struct less_than_key
    {
        inline bool operator() (vector<int>& struct1, vector<int>& struct2)
        {
            return (struct1[1] < struct2[1]);
        }
    };
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), less_than_key());
        int count=0, prev;
        bool start = true;
        for(vector<int> arr: intervals){
            if(start){
                prev = arr[1];
                start = false;
            }else{
                if(prev > arr[0]){
                    count ++;
                }else{
                    prev = arr[1];
                }
            }
        }
        return count;
    }
};
