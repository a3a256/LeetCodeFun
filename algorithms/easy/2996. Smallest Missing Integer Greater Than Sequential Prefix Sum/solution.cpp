class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int total = nums[0];
        int i = 1;
        map<int, int> mp = {{nums[0], 1}};
        while(i<nums.size()){
            if(nums[i] - nums[i-1] != 1){break;}
            else{
                total += nums[i];
                mp[nums[i]]++;
            }
            i++;
        }
        while(i<nums.size()){
            mp[nums[i]]++;
            i++;
        }
        while(mp[total] != 0){
            total++;
        }
        return total;
    }
};
