class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prev, vsum, i;
        vsum = 0;
        prev = 0;
        for(i=0; i<gain.size(); i++){
            prev += gain[i];
            vsum = max(vsum, prev);
        }

        return vsum;
    }
};
