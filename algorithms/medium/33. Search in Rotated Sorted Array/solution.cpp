class Solution {
public:
    int found(vector<int>& arr, int start, int end, int target){
        int mid, backup;
        while(start<=end){
            mid = (start+end)/2;
            backup = mid;
            if(mid<0){
                backup = arr.size()+mid;
            }
            if(arr[backup] == target){
                return backup;
            }else if(arr[backup] > target){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int start, end;
        start = 0;
        end = nums.size()-1;
        int pos = found(nums, start, end, target);
        while(pos == -1){
            if(abs(start) == nums.size()){
                return -1;
            }
            start --;
            end --;
            pos = found(nums, start, end, target);
        }
        return pos;
    }
};
