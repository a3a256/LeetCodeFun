class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        long long middle, sep, i, j, start, end;
        middle = accumulate(arr.begin(), arr.end(), 0);
        if(middle%3 != 0){
            return false;
        }
        sep = middle/3;
        start = arr[0];
        i = 1;
        while(start != sep && i < arr.size()){
            start += arr[i];
            i++;
        }
        end = arr.back();
        j = arr.size()-2;
        while(end != sep && j > -1){
            end += arr[j];
            j--;
        }
        return i<=j;
    }
};
