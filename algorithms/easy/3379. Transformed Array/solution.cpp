class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int pos;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                pos = i - abs(nums[i])%nums.size();
                if(pos < 0){pos += nums.size();}
            }else{pos = (i+nums[i])%nums.size();}
            res[i] = nums[pos];
        }
        return res;
    }
};
