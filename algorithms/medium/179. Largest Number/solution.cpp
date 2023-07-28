class Solution {
public:
    struct cmp{
        inline bool operator() (int a, int b){
            return to_string(a)+to_string(b)>to_string(b)+to_string(a);
        }
    };
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp());
        string res = "";
        for(int i:nums){
            res += to_string(i);
        }
        if(res[0] == '0'){
            return "0";
        }
        return res;
    }
};
