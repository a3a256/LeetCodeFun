class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        map<string, int> mp, np;
        int i, j;
        string s;
        string prefix = "";
        for(i=0; i<arr1.size(); i++){
            s = to_string(arr1[i]);
            mp[prefix] ++;
            for(j=0; j<s.size(); j++){
                prefix += s[j];
                mp[prefix] ++;
            }
            prefix = "";
        }
        for(i=0; i<arr2.size(); i++){
            s = to_string(arr2[i]);
            for(j=0; j<s.size(); j++){
                prefix += s[j];
                np[prefix] ++;
            }
            prefix = "";
        }
        int len = 0;
        for(auto it: np){
            if(mp[it.first] != 0){
                len = max(len, (int)it.first.size());
            }
        }

        return len;
    }
};
