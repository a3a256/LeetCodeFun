class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int arrs[501];
        int i;
        for(i=0; i<nums.size(); i++){
            arrs[nums[i]]++;
        }
        for(i=0; i<501; i++){
            if(arrs[i] != 0 && arrs[i]%2 != 0){
                return false;
            }
        }
        return true;
    }
};
