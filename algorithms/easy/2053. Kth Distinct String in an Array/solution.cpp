class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> mp;
        int i, order;
        for(i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        order = 1;
        for(i=0; i<arr.size(); i++){
            if(mp[arr[i]] == 1){
                if(order == k){
                    return arr[i];
                }
                order++;
            }
        }

        return "";
    }
};
