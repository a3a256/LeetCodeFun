class Solution {
public:

    int getLucky(string s, int k) {
        map<char, string> mp = {{'a', "1"}, {'b', "2"}, {'c', "3"}, {'d', "4"}, {'e', "5"}, {'f', "6"}, {'g', "7"},
        {'h', "8"}, {'i', "9"}, {'j', "10"}, {'k', "11"}, {'l', "12"}, {'m', "13"}, {'n', "14"}, {'o', "15"},
        {'p', "16"}, {'q', "17"}, {'r', "18"}, {'s', "19"}, {'t', "20"}, {'u', "21"}, {'v', "22"}, {'w', "23"},
        {'x', "24"}, {'y', "25"}, {'z', "26"}};
        map<char, int> mp_num = {{'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5},
                                    {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}};

        string nums = "";
        int i, j, res;
        for(i=0; i<s.size(); i++){
            nums += mp[s[i]];
        }
        for(i=0; i<k; i++){
            res = 0;
            for(j=0; j<nums.size(); j++){
                res += mp_num[nums[j]];
            }
            nums = to_string(res);
        }
        return res;
    }
};
