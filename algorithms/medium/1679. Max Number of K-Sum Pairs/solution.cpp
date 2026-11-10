class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i=0, j = nums.size()-1, cur, count = 0;
        while(i<j){
            cur = nums[i] + nums[j];
            if(cur == k){
                count++;
                i++;
                j--;
            }else if(cur < k){
                i++;
            }else{
                j--;
            }
        }
        return count;
    }
};
