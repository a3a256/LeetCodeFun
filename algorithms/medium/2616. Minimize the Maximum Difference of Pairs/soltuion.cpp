class Solution {
public:
    bool solve(vector<int>& arr, int mid, int p){
        int c=0;
        int i;
        for(i=0; i<arr.size()-1; i++){
            if(arr[i+1]-arr[i] <= mid){
                c++;
                i ++;
            }
            if(c >= p){
                return true;
            }
        }
        return false;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int low, high, mid, n;
        n = nums.size()-1;
        low = 0;
        high = nums[n]-nums[0];
        while(low<high){
            mid = (low+high)/2;
            if(solve(nums, mid, p)){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};
