class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int minimal_value = *min_element(nums.begin(), nums.end());
        if(minimal_value < k){
            return -1;
        }
        set<int> stk;
        int i, coef;
        for(i=0; i<nums.size(); i++){
            stk.insert(nums[i]);
        }
        coef = 0;
        if(minimal_value == k){
            coef ++;
        }
        return (int)stk.size() - coef;
    }
};
