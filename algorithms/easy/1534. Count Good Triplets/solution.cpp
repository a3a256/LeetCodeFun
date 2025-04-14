class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int i, j, k, count, diff_1, diff_2, diff_3;
        count = 0;
        for(i=0; i<arr.size()-2; i++){
            for(j=i+1; j<arr.size()-1; j++){
                for(k=j+1; k<arr.size(); k++){
                    diff_1 = abs(arr[i] - arr[j]);
                    diff_2 = abs(arr[j] - arr[k]);
                    diff_3 = abs(arr[i] - arr[k]);
                    if(diff_1 <= a && diff_2 <= b && diff_3 <= c){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
