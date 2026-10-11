class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 0){return 0;}
        int product = 1, res = 0;
        int i = 0, j, cur_count = 0;
        for(j=0; j<nums.size(); j++){
            product *= nums[j];
            cur_count++;
            while(product >= k && i<j){
                product /= nums[i];
                i++;
                cur_count--;
            }
            res += (product<k)?cur_count:0;
        }
        return res;
    }
};
