class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int diff = accumulate(nums.begin(), nums.end(), 0) - x;
        if(diff == 0){return nums.size();}
        if(diff < 0){return -1;}
        int steps = -1, cur = 0, i = 0, j;
        for(j=0; j<nums.size(); j++){
            cur += nums[j];
            while(cur > diff){
                cur -= nums[i];
                i++;
            }
            if(cur == diff){steps = max(steps, j-i+1);}
        }
        return steps + 1? nums.size()-steps:-1;
    }
};
