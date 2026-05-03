class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int i, min_val, max_val, cur;
        for(int i=0; i<nums.size(); i++){
            max_val = *max_element(nums.begin(), nums.begin()+i+1);
            min_val = *min_element(nums.begin()+i, nums.end());
            cur = max_val - min_val;
            if(cur <= k){
                return i;
            }
        }
        return -1;
    }
};
