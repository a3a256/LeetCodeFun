class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].size();
        int max_value = 0, i;
        for(i=0; i<n; i++){
            max_value += pow(2, i);
        }
        string v;
        for(i=0; i<=max_value; i++){
            v = bitset<16>(i).to_string();
            v = v.substr(16-n);
            if(find(nums.begin(), nums.end(), v) == nums.end()){
                return v;
            }
        }
        return "";
    }
};
