class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<int, int> mp;
        int i = 0, j = 0, total, res;
        res = 0;
        bool legit;
        while(j<s.size()){
            mp[s[j]]++;
            total = 0;
            legit = true;
            for(auto it: mp){
                total += it.second;
                if(it.second > 2){legit = false;}
            }
            if(legit){
                res = max(res, total);
                j++;
            }else{
                mp[s[i]] -= 1;
                mp[s[j]] -= 1;
                i++;
            }
        }
        return res;
    }
};
