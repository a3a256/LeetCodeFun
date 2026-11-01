class Solution {
public:
    int longestBeautifulSubstring(string word) {
        string un = "";
        int i, j = 0, res = 0;
        map<char, int> mp;
        for(i=0; i<word.size(); i++){
            if(un == ""){
                un += word[i];
                j = i;
            }else{
                if(word[i] != un.back()){
                    if(word[i] == 'a'){
                        j = i;
                        un = "";
                        un += word[i];
                        mp['a'] = 0;mp['e'] = 0;mp['i'] = 0;mp['o'] = 0;mp['u'] = 0;
                    }else{
                        un += word[i];
                    }
                }
                mp[word[i]]++;
                if(un == "aeiou"){res = max(res, i-j+1);}
            }
        }
        return res;
    }
};
