class Solution {
public:
    int maximumLength(string s) {
        map<string, int> mp;
        int i;
        string line = "";
        for(i=0; i<s.size(); i++){
            if(line.size() == 0){
                line += s[i];
            }else{
                if(s[i] != line.back()){
                    line = "";
                    line += s[i];
                }else{
                    line += s[i];
                }
            }
            mp[line]++;
        }

        map<string, int> occurence;
        for(auto it: mp){
            occurence[it.first] = it.second;
            for(auto ti: mp){
                if(it.first[0] == ti.first[0] && it.first.size() < ti.first.size()){
                    occurence[it.first] += ti.second;
                }
            }
            if(occurence[it.first] < 3){
                occurence[it.first] = -1;
            }
        }
        int length = -1;
        for(auto it: occurence){
            if(it.second >= 3){
                length = max(length, (int)it.first.size());
            }
        }

        return length;
    }
};
