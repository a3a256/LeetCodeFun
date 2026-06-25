class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i, j, ans, temp;
        i = 0;
        j = nums.size()-1;
        ans = 0;
        while(i<=j){
            if(nums[j] != 0){
                if(nums[i] == 0){
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    ans++;
                    j--;
                }else{
                    i++;
                }
            }else{
                j--;
            }
        }
        return ans;
    }
};
