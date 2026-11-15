class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int i, j, asc, desc, res;
        asc = -1;
        res = 0;
        desc = 0;
        j = 0;
        for(i=1; i<arr.size(); i++){
            if(arr[i] < arr[i-1]){
                if(asc == -1){
                    j = i;
                }else{
                    if(asc){
                        desc = 1;
                        asc = 0;
                    }
                    res = max(res, i-j+1);
                }
            }else if(arr[i] > arr[i-1]){
                if(asc == -1){
                    asc = 1;
                }
                if(desc){
                    j = i-1;
                    asc = 1;
                    desc = 0;
                }
            }else{
                asc = -1;
                desc = 0;
                j = i;
            }
        }

        return res;
    }
};
