class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp;
        int count = 0, i, num;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second == 1){
                return -1;
            }
            num = it.second;
            while(num > 3){
                num -=3;
                count++;
            }
            if(num != 0){
                count++;
            }
        }
        return count;
    }
};
