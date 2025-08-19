class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        vector<long long> counts;
        long long count = 0, res;
        int i;
        for(i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                count++;
            }else{
                if(count != 0){
                    counts.push_back(count);
                }
                count = 0;
            }
        }
        if(count != 0){
            counts.push_back(count);
        }
        if(counts.size() == 0){
            return 0;
        }
        res = 0;
        for(i=0; i<counts.size(); i++){
            res += ((1+counts[i])*counts[i])/2;
        }
        return res;
    }
};
