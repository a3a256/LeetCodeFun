class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int vmax = *max_element(nums.begin(), nums.end());
        int vmin = *min_element(nums.begin(), nums.end());
        map<int, int> front;
        map<int, int> back;
        int i;
        for(i=0; i<nums.size(); i++){
            if(nums[i] == vmax){
                front[vmax] = i;
            }
            if(nums[i] == vmin){
                front[vmin] = i;
            }
        }
        for(i=nums.size()-1; i>-1; i--){
            if(nums[i] == vmax){
                back[vmax] = nums.size()-i;
            }
            if(nums[i] == vmin){
                back[vmin] = nums.size()-i;
            }
        }

        int left = max(front[vmax], front[vmin])+1;
        int right = max(back[vmax], back[vmin]);
        int res_cor = min(left, right);
        int comb = min(front[vmin]+1+back[vmax], front[vmax]+1+back[vmin]);
        return min(res_cor, comb);
    }
};
