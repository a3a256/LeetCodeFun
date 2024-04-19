class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int i, length, cur;
        cur = 1;
        length = INT_MIN;
        vector<int> v;
        if(nums.size() == 1){
            return 1;
        }
        for(i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                cur++;
            }else{
                length = max(cur, length);
                cur = 1;
            }
        }
        length = max(cur, length);
        cur = 1;
        for(i=1; i<nums.size(); i++){
            if(nums[i]<nums[i-1]){
                cur++;
            }else{
                length = max(cur, length);
                cur = 1;
            }
        }
        length = max(cur, length);
        return length;
    }
};
