class Solution {
public:
    int jump(vector<int>& nums) {
        int last = nums.size()-1;
        int i;
        for(i=1; i<nums.size(); i++){
            nums[i] = max(nums[i]+i, nums[i-1]);
        }
        int ans=0, ind=0;
        while(ind<last){
            ans ++;
            ind = nums[ind];
        }
        return ans;
    }
};
