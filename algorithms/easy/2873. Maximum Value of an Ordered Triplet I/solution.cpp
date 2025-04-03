class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0, i, j, k, cur;
        for(i=0; i<nums.size()-2; i++){
            for(j=i+1; j<nums.size()-1; j++){
                for(k=j+1; k<nums.size(); k++){
                    cur = ((long long)nums[i]-(long long)nums[j])*(long long)nums[k];
                    ans = max(cur, ans);
                }
            }
        }
        return ans;
    }
};
