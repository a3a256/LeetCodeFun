class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        double avg;
        int i, n, count;
        n = nums.size();
        n -= 1;
        count = 0;
        for(i=0; i<nums.size()-1; i++){
            total -= nums[i];
            avg = (double)total/(double)(n);
            if((double)nums[i] > avg){count++;}
            n--;
        }
        return count;
    }
};
