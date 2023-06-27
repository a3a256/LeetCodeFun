class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int, int>>> pq;
        int i, j, sum;
        for(i=0; i<nums1.size(); i++){
            for(j=0; j<nums2.size(); j++){
                sum = nums1[i] + nums2[j];
                if(pq.size()<k){
                    pq.push({sum, {nums1[i], nums2[j]}});
                }else if(sum < pq.top().first){
                    pq.pop();
                    pq.push({sum, {nums1[i], nums2[j]}});
                }else{
                    break;
                }
            }
        }
        vector<vector<int>> res;
        while(!(pq.empty())){
            res.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};
