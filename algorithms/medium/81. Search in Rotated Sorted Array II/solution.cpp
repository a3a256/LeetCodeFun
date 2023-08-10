class Solution {
public:
    bool solve(vector<int>& nums, int start, int end, int target){
        int mid, backup;
        while(start<=end){
            backup = (start+end)/2;
            mid = backup;
            if(backup<0){
                mid = nums.size()+backup;
            }
            if(nums[mid] == target){
                return true;
            }else if(nums[mid] < target){
                start = backup+1;
            }else{
                end = backup-1;
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int start, end;
        start = 0, end=nums.size()-1;
        bool found = solve(nums, start, end, target);
        while(!(found)){
            if(abs(start) == nums.size()){
                return false;
            }
            start --;
            end --;
            found = solve(nums, start, end, target);
        }
        return found;
    }
};
