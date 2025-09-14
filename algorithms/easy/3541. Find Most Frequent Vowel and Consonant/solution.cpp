class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> mp;
        for(char c: s){
            mp[c]++;
        }
        int max_v = 0, max_c = 0;
        for(auto it: mp){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' || it.first == 'u'){
                max_v = max(max_v, it.second);
            }else{
                max_c = max(max_c, it.second);
            }
        }
        return max_v+max_c;
    }
};
