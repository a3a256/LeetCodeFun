class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> sub;
        int i;
        for(i=0; i<nums.size(); i++){
            if(sub.empty() || sub.back() < nums[i]){
                sub.push_back(nums[i]);
            }else{
                auto it = lower_bound(sub.begin(), sub.end(), nums[i]);
                *it = nums[i];
            }
        }
        return sub.size();
    }
};
