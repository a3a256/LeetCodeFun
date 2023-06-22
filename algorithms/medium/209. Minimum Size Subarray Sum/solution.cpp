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
        vector<int> lens;
        while(start<=end && end < n){
            if(vsum >= target){
                vsum -= nums[start];
                lens.push_back(end-start+1);
                start ++;
            }else{
                end ++;
                if(end<n){
                    vsum += nums[end];
                }
            }
        }

        return *min_element(lens.begin(), lens.end());
    }
};
