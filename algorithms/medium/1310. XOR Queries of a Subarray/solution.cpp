class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int i, j, start;
        vector<int> res;
        for(i=0; i<queries.size(); i++){
            start = arr[queries[i][0]];
            if(queries[i][0] != queries[i][1]){
                start = arr[queries[i][0]]^arr[queries[i][0]+1];
                for(j=queries[i][0]+2; j<=queries[i][1]; j++){
                    start = start^arr[j];
                }
            }
            res.push_back(start);
        }
        return res;
    }
};
