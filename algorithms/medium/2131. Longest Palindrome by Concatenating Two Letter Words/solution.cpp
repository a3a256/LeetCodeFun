class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string, int> equal, different;
        map<int, int> freqs;
        int i;
        for(i=0; i<words.size(); i++){
            if(words[i][0] != words[i][1]){
                different[words[i]]++;
            }else{
                equal[words[i]]++;
            }
        }
        int odd, res;
        odd = 0;
        res = 0;
        for(auto it: equal){
            freqs[it.second]++;
            if(it.second%2 != 0){
                odd = max(odd, it.second);
            }
        }
        for(auto it: freqs){
            if(it.first%2 == 0){
                res += (it.first*2)*it.second;
            }else{
                if(it.first != odd){
                    res += ((it.first-1)*2)*(it.second);
                }else{
                    if(it.second > 1){
                        res += ((it.first-1)*2)*(it.second-1);
                    }
                    res += odd*2;
                }
            }
        }
        string r = "";
        for(auto it: different){
            r += it.first[1];
            r += it.first[0];
            if(different[r] != 0){
                res += 4*(min(it.second, different[r]));
                different[r] = 0;
            }
            r = "";
        }
        return res;
    }
};
