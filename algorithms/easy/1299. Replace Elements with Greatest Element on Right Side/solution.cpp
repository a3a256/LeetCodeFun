class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i, v=-1, temp;
        for(i=arr.size()-1; i>-1; i--){
            temp = max(v, arr[i]);
            arr[i] = v;
            v = temp;
        }
        return arr;
    }
};
