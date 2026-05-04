class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> mp;
        vector<int> qp(nums.size(), INT_MAX);
        int i, cur;
        for(i=0; i<nums.size(); i++){
            if(mp.empty()){
                mp.push_back(nums[i]);
            }else{
                mp.push_back(max(nums[i], mp.back()));
            }
        }
        for(i=nums.size()-1; i>-1; i--){
            if(i == nums.size()-1){
                qp[i] = nums[i];
            }else{
                qp[i] = min(nums[i], qp[i+1]);
            }
        }
        for(i=0; i<nums.size(); i++){
            cur = mp[i] - qp[i];
            if(cur <= k){return i;}
        }
        return -1;
    }
};
