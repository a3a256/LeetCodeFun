class Solution {
public:
    vector<string> res;
    map<char, string> mp = {{'2', "abc"},
                                {'3', "def"},
                                {'4',"ghi"},
                                {'5',"jkl"},
                                {'6',"mno"},
                                {'7',"pqrs"},
                                {'8', "tuv"},
                                {'9',"wxyz"}};
    void solve(string line, int lim, int i, string nums){
        if(line.size() == lim){
            res.push_back(line);
            return;
        }
        int j;
        string parse = mp[nums[i]];
        for(j=0; j<parse.size(); j++){
            line += parse[j];
            solve(line, lim, i+1, nums);
            line.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0){
            return res;
        }
        int n = digits.size();
        solve("", n, 0, digits);
        return res;
    }
};
