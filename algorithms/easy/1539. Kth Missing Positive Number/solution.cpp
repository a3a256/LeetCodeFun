class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int, int> nums;
        for(int i: arr){
            nums[i]++;
        }
        int index = 0, i = 0;
        while(index<k){
            i++;
            if(nums[i] == 0){index++;}
        }
        return i;
    }
};
