class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        int i, j;
        vector<string> res;
        map<string, int> mp;
        for(i=0; i<folder.size()-1; i++){
            if(mp[folder[i]] != 1){
                res.push_back(folder[i]);
                for(j=i+1; j<folder.size(); j++){
                    if(folder[j].find(folder[i]+'/') == 0){
                        mp[folder[j]]++;
                    }else{
                        break;
                    }
                }
            }
        }
        if(mp[folder[i]] != 1){
            res.push_back(folder[i]);
        }
        return res;
    }
};
