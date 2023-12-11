class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size();
        map<int, int> mp;
        for(int i: arr){
            mp[i]++;
        }
        for(auto it: mp){
            if((float)((float)it.second/(float)size) > 0.25){
                return it.first;
            }
        }
        return arr[0];
    }
};
