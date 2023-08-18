class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        set<pair<int, int>> st;
        map<int, int> mp;
        for(auto& r: roads){
            mp[r[0]] ++;
            mp[r[1]] ++;
            st.insert({r[0], r[1]});
            st.insert({r[1], r[0]});
        }
        int max_rank = INT_MIN, rank, i, j;
        for(i=0; i<n-1; i++){
            for(j=i+1; j<n; j++){
                rank = mp[i] + mp[j];
                if(st.count({i, j}) || st.count({j, i})){
                    rank --;
                }
                max_rank = max(rank, max_rank);
            }
        }
        return max_rank;
    }
};
