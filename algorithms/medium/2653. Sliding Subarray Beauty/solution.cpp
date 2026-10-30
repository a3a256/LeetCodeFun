class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int mp[101];
        int i, j = 0, p, cur, index = 0;
        vector<int> res (nums.size()-k+1, 0);
        for(i=0; i<nums.size(); i++){
            mp[nums[i]+50]++;
            if(i-j+1 == k){
                cur = 0;
                p = 0;
                while(p<101 && cur < x){
                    cur += mp[p];
                    p++;
                }
                res[index] = min(p-51, 0);
                mp[nums[j]+50]--;
                j++;
                index++;
            }
        }
        return res;
    }
};
