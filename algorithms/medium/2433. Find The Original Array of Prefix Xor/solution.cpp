class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        if(pref.size() <= 1){
            return pref;
        }
        vector<int> original(pref.size(), 0);
        original[0] = pref[0];
        int i;
        for(i=1; i<pref.size(); i++){
            original[i] = pref[i]^pref[i-1];
        }
        return original;
    }
};
