class Solution {
public:
    int search(vector<int> &nums, int start, int end){
        if(start > end){
            return 5001;
        }
        int mid = (start+end)/2;
        int left, right;
        left = search(nums, start, mid-1);
        right = search(nums, mid+1, end);
        return min(nums[mid], min(left, right));
    }

    int findMin(vector<int>& nums) {
        return search(nums, 0, nums.size()-1);
    }
};
