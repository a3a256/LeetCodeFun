class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string, int> mp;
        int j;
        string seq = "";
        for(j=0; j<min(10, (int)s.size()); j++){
            seq += s[j];
        }
        mp[seq]++;
        while(j<s.size()){
            seq += s[j];
            seq.erase(seq.begin()+0);
            mp[seq]++;
            j++;
        }
        vector<string> res;
        for(auto it: mp){
            if(it.second > 1){
                res.push_back(it.first);
            }
        }
        return res;
    }
};
