class Solution {
public:
    int minimumLength(string s) {
        map<char, int> mp;
        for(char c: s){
            mp[c]++;
        }
        int res = 0;
        for(auto it: mp){
            if(it.second > 2){
                if(it.second%2 == 0){
                    res += 2;
                }else{
                    res += 1;
                }
            }else{
                res += it.second;
            }
        }
        return res;
    }
};
