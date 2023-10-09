class Solution {
public:
    int search(vector<int> &arr, int start, int end, int target){
        if(start>end){
            return -1;
        }
        int mid = (start+end)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            return search(arr, mid+1, end, target);
        }else{
            return search(arr, start, mid-1, target);
        }

        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int present = search(nums, 0, nums.size()-1, target);
        if(present == -1){
            return {-1, -1};
        }
        int start, end;
        start = present;
        end = present;
        while(start>0){
            if(nums[start-1] != target){
                break;
            }else{
                start--;
            }
        }
        while(end<nums.size()-1){
            if(nums[end+1] != target){
                break;
            }else{
                end++;
            }
        }
        return {start, end};
    }
};
