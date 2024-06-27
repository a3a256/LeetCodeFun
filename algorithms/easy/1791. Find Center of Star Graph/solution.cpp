class Solution {
public:
    int arr[100001];
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int i;
        for(i=0; i<edges.size(); i++){
            arr[edges[i][0]]++;
            arr[edges[i][1]]++;
        }
        for(i=1; i<=n+1; i++){
            if(arr[i] == n){
                return i;
            }
        }

        return -1;
    }
};
