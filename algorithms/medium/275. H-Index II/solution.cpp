class Solution {
public:
    int high(vector<int> &nums, int target){
        int start, end, mid, cur;
        start = 0;
        end = nums.size()-1;
        cur = -1;
        while(start <= end){
            mid = (start+end)/2;
            if(nums[mid] <= target){
                if(nums[mid] == target){
                    cur = mid;
                }
                start = mid+1;
            }else{
                end = mid-1;
            }
        }

        return cur;
    }

    int low(vector<int> &nums, int target){
        int start, end, mid, cur;
        start = 0;
        end = nums.size()-1;
        cur = -1;
        while(start <= end){
            mid = (start+end)/2;
            if(nums[mid] >= target){
                if(nums[mid] == target){
                    cur = mid;
                }
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return cur;
    }
    int hIndex(vector<int>& citations) {
        int start, end, mid, first, last, res;
        start = 0;
        end = citations.size()-1;
        res = 0;
        while(start <= end){
            mid = (start+end)/2;
            first = low(citations, citations[mid]);
            last = high(citations, citations[mid]);
            if((citations.size() - first) >= citations[mid]){
                res = max(res, citations[mid]);
                start = mid+1;
            }else{
                res = max(res, (int)citations.size() - first);
                end = mid-1;
            }
        }
        return res;
    }
};
