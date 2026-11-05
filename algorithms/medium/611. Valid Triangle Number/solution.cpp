class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size() <= 2){return 0;}
        sort(nums.begin(), nums.end());
        int i, start, end, res = 0;
        for(i=nums.size()-1; i>=2; i--){
            start = 0;
            end = i-1;
            while(start < end){
                if(nums[start] + nums[end] > nums[i]){
                    res += end - start;
                    end--;
                }else{
                    start++;
                }
            }
        }
        return res;
    }
};
