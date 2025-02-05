class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int i;
        map<char, int> mp, one, two;
        for(i=0; i<s1.size(); i++){
            if(s1[i] != s2[i]){
                mp[s1[i]]++;
                mp[s2[i]]++;
            }
            one[s1[i]]++;
            two[s2[i]]++;
        }
        if(mp.size() > 2){
            return false;
        }
        for(auto it: mp){
            if(it.second != 2){
                return false;
            }
            if(one[it.first] == 0 || two[it.first] == 0){
                return false;
            }
        }
        return true;
    }
};
