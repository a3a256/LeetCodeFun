class Solution {
public:
    int search(vector<int> &vec, long long start, long long end, long long target){
        int mid;
        while(start<=end){
            mid = (start+end)/2;
            if(vec[mid] == target){
                return mid;
            }else if(vec[mid] < target){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return -1;
    }

    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long i, pos, cur, length, count;
        length = -1;
        for(i=0; i<nums.size(); i++){
            cur = nums[i];
            pos = search(nums, i+1, nums.size()-1, cur*cur);
            count = 1;
            while(pos != -1){
                cur = cur*cur;
                pos = search(nums, pos+1, nums.size()-1, cur*cur);
                count++;
            }
            length = max(count, length);
        }
        if(length < 2){
            return -1;
        }
        return length;
    }
};
