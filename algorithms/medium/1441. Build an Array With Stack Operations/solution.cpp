class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        map<int, int> mp;
        int i;
        for(i=0; i<target.size(); i++){
            mp[target[i]]++;
        }
        vector<string> res;
        for(i=1; i<=target.back(); i++){
            if(mp[i] == 1){
                res.push_back("Push");
            }else{
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        return res;
    }
};
