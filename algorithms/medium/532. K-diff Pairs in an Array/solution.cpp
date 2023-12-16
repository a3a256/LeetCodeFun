class Solution {
public:
    int search(int start, int end, vector<int> &arr, int target){
        if(start>end){
            return -1;
        }
        int mid = (start+end)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] > target){
            return search(start, mid-1, arr, target);
        }else{
            return search(mid+1, end, arr, target);
        }
        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i, size, target, pos;
        set<pair<int, int>> stk;
        size = nums.size();
        for(i=0; i<nums.size()-1; i++){
            target = nums[i]+k;
            pos = search(i+1, size-1, nums, target);
            if(pos != -1){
                stk.insert({nums[i], nums[pos]});
            }
        }
        return stk.size();
    }
};
