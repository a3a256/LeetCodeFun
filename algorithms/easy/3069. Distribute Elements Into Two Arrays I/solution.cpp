class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> one = {nums[0]}, two = {nums[1]};
        int i;
        for(i=2; i<nums.size(); i++){
            if(one.back() > two.back()){one.push_back(nums[i]);}else{two.push_back(nums[i]);}
        }
        for(int j: two){one.push_back(j);}
        return one;
    }
};
