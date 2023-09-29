class Solution {
public:
    bool check(vector<int> &arr, bool asc){
        int i;
        for(i=1; i<arr.size(); i++){
            if(asc){
                if(arr[i] > arr[i-1]){
                    return false;
                }
            }else{
                if(arr[i] < arr[i-1]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() == 1){
            return true;
        }
        bool check1 = check(nums, true);
        bool check2 = check(nums, false);
        if(check1 || check2){
            return true;
        }
        return false;
    }
};
