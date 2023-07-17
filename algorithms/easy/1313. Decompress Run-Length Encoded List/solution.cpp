class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i, j, freq, val;
        vector<int> res;
        for(i=0; i<nums.size(); i+=2){
            freq = nums[i];
            val = nums[i+1];
            for(j=0; j<freq; j++){
                res.push_back(val);
            }
        }
        return res;
    }
};
