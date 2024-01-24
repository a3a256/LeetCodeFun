class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char, int> mp;
        map<char, int> dp;
        int i, j, total;
        bool illegal;
        total = 0;
        for(i=0; i<chars.size(); i++){
            mp[chars[i]]++;
        }
        for(i=0; i<words.size(); i++){
            for(j=0; j<words[i].size(); j++){
                dp[words[i][j]]++;
            }
            illegal = false;
            for(auto it: dp){
                if(it.second > mp[it.first]){
                    illegal = true;
                    break;
                }
            }
            if(!illegal){
                total += words[i].size();
            }
            dp.clear();
        }
        return total;
    }
};
