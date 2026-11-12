class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i, j, n, res;
        n = nums.size()/2;
        n += nums.size()%2;
        j = 0;
        res = 0;
        for(i=n; i<nums.size(); i++){
            if(nums[j]*2 <= nums[i]){
                res += 2;
                j++;
            }
        }
        return res;
    }
};
