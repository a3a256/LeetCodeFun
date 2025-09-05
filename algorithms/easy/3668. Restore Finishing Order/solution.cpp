class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        map<int, int> mp;
        vector<int> res;
        int i;
        for(i=0; i<friends.size(); i++){
            mp[friends[i]]++;
        }
        for(i=0; i<order.size(); i++){
            if(mp[order[i]] != 0){
                res.push_back(order[i]);
            }
        }
        return res;
    }
};
