class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        if(arr.size() <= 1){return arr.size();}
        int i, res = 0;
        int right = 0, left = 0;
        bool more = false;
        for(i=0; i<arr.size()-1; i++){
            if(arr[i] < arr[i+1]){
                if(!more){
                    left = i;
                }
                right = i+1;
                more = false;
                res = max(res, right-left+1);
            }else if(arr[i] > arr[i+1]){
                if(more){left = i;}
                right = i+1;
                more = true;
                res = max(res, right-left+1);
            }else{
                res = max(res, 1);
                left = i+1;
                right = left+1;
            }
        }
        return res;
    }
};
