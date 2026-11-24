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


// Second solution, because I can

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l_start = 0, l_end, h_start = 0, h_end, mid, low, high;
        l_end = nums.size()-1;
        h_end = nums.size()-1;
        low = -1;
        high = -1;
        while((l_start <= l_end) || (h_start <= h_end)){
            if(l_start <= l_end){
                mid = (l_start+l_end)/2;
                if(nums[mid] >= target){
                    if(nums[mid] == target){
                        low = mid;
                    }
                    l_end = mid-1;
                }else{
                    l_start = mid+1;
                }
            }
            if(h_start <= h_end){
                mid = (h_start + h_end)/2;
                if(nums[mid] <= target){
                    if(nums[mid] == target){
                        high = mid;
                    }
                    h_start = mid+1;
                }else{
                    h_end = mid-1;
                }
            }
        }
        return {low, high};
    }
};
