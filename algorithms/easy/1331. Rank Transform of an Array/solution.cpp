class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mp;
        for(int i: arr){
            mp[i]++;
        }
        int index = 1;
        for(auto it: mp){
            mp[it.first] = index;
            index++;
        }
        for(index = 0; index < arr.size(); index++){
            arr[index] = mp[arr[index]];
        }
        return arr;
    }
};
