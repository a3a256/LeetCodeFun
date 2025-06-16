class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        vector<int> cop;
        cop = nums;
        int i, diff=-1;
        for(i=cop.size()-2; i>-1; i--){
            cop[i] = max(cop[i], cop[i+1]);
        }
        for(i=0; i<cop.size(); i++){
            diff = max(diff, cop[i]-nums[i]);
        }
        if(diff == 0){
            return -1;
        }
        return diff;
    }
};
