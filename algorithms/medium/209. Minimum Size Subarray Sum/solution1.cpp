class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int vsum, i, start, end, n;
        n = nums.size();
        start = 0;
        vsum = 0;
        for(i=0; i<n; i++){
            vsum += nums[i];
            if(vsum >= target){
                end = i;
                break;
            }
        }
        if(vsum < target){
            return 0;
        }
        int lens = INT_MAX;
        while(start<=end && end < n){
            if(vsum >= target){
                vsum -= nums[start];
                lens = min(end-start+1, lens);
                start ++;
            }else{
                end ++;
                if(end<n){
                    vsum += nums[end];
                }
            }
        }

        return lens;
    }
};
