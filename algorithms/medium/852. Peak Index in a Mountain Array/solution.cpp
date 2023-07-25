class Solution {
public:
    int search(vector<int> arr, int start, int end, int target){
        int mid = (start+end)/2;
        if(arr[mid] == target){
            return mid;
        }else if(mid < arr.size()-1){
            if(arr[mid+1]>arr[mid]){
                return search(arr, mid+1, end, target);
            }else if(arr[mid+1]<arr[mid]){
                return search(arr, start, mid-1, target);
            }
        }
        return -1;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        int vmax = *max_element(arr.begin(), arr.end());
        int index = search(arr, 0, arr.size()-1, vmax);
        return index;
    }
};
