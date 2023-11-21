class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        map<int, vector<int>> mp;
        string num = "";
        int diff, i;
        long long res = 0, sum;
        for(i=0; i<nums.size(); i++){
            num = to_string(nums[i]);
            reverse(num.begin(), num.end());
            diff = nums[i] - stoi(num);
            mp[diff].push_back(i);
        }
        for(auto it: mp){
            sum = it.second.size();
            res += (sum*(sum-1))/2;
        }
        return res%(1000000007);
    }
};
