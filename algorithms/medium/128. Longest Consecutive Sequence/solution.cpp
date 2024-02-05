class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        set<int> stk;
        int i, count, val, temp;
        for(i=0; i<nums.size(); i++){
            stk.insert(nums[i]);
        }
        i = 0;
        temp = 0;
        count = 0;
        for(auto it: stk){
            if(i == 0){
                val = it;
            }else{
                if(it-val != 1){
                    count = max(count, temp);
                    temp = 0;
                }
            }
            val = it;
            temp++;
            i++;
        }
        count = max(count, temp);
        return count;
    }
};
