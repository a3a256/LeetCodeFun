class Solution {
public:
    struct horizontal_sort{
        inline bool operator() (vector<int>& a, vector<int> &b){
            return a[0] < b[0];
        }
    };
    struct vertical_sort{
        inline bool operator() (vector<int>& a, vector<int> &b){
            return a[1] < b[1];
        }
    };
    vector<vector<int>> merge(vector<vector<int>> &intervals, int hor){
        vector<vector<int>> res;
        stack<vector<int>> stk;
        int i;
        for(i=0; i<intervals.size(); i++){
            if(stk.empty()){
                if(hor){
                    stk.push({intervals[i][0], intervals[i][2]});
                }else{
                    stk.push({intervals[i][1], intervals[i][3]});
                }
            }else{
                if(hor){
                    if(stk.top()[1] > intervals[i][0]){
                        if(stk.top()[1] <= intervals[i][2]){
                            stk.top()[1] = intervals[i][2];
                        }
                    }else{
                        stk.push({intervals[i][0], intervals[i][2]});
                    }
                }else{
                    if(stk.top()[1] > intervals[i][1]){
                        if(stk.top()[1] <= intervals[i][3]){
                            stk.top()[1] = intervals[i][3];
                        }
                    }else{
                        stk.push({intervals[i][1], intervals[i][3]});
                    }
                }
            }
        }
        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }
        return res;
    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        sort(rectangles.begin(), rectangles.end(), horizontal_sort());
        vector<vector<int>> hor_int, ver_int;
        hor_int = merge(rectangles, 1);
        sort(rectangles.begin(), rectangles.end(), vertical_sort());
        ver_int = merge(rectangles, 0);
        return hor_int.size() >= 3 || ver_int.size() >= 3;
    }
};
