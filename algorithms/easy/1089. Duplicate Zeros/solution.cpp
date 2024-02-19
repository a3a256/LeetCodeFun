class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = arr.size()-1, size = (int)arr.size();
        while(i>-1){
            if(arr[i] == 0){
                arr.insert(arr.begin()+i, 0);
            }
            i--;
        }
        while(arr.size() > size){
            arr.pop_back();
        }
    }
};
