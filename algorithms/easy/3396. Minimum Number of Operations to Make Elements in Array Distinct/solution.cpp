class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int, int> arr;
        int i, j, count;
        bool clean = true;
        for(i=0; i<nums.size(); i++){
            if(arr[nums[i]] == 1){
                clean = false;
            }
            arr[nums[i]]++;
        }
        i = 0;
        count = 0;
        while(!clean){
            clean = true;
            if(i<nums.size()){
                arr[nums[i]]--;
                i++;
            }
            if(i<nums.size()){
                arr[nums[i]]--;
                i++;
            }
            if(i<nums.size()){
                arr[nums[i]]--;
                i++;
            }
            for(auto it: arr){
                if(it.second > 1){
                    clean = false;
                }
            }
            count++;
        }
        return count;
    }
};
