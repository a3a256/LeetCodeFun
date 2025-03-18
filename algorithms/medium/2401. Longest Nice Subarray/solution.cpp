class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int i, j, first, longest, val;
        longest = 1;
        first = 0;
        for(i=1; i<nums.size(); i++){
            for(j=first; j<i; j++){
                val = nums[j]&nums[i];
                if(val != 0){
                    first = j+1;
                }
            }
            longest = max(longest, i-first+1);
        }
        return longest;
    }
};
