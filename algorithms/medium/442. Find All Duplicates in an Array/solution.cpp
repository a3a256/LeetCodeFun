class Solution {
public:
    int arr[100001];
    vector<int> findDuplicates(vector<int>& nums) {
        int i, max_size;
        max_size = INT_MIN;
        for(i=0; i<nums.size(); i++){
            arr[nums[i]]++;
            max_size = max(nums[i], max_size);
        }
        vector<int> res;
        for(i=1; i<=max_size; i++){
            if(arr[i] == 2){
                res.push_back(i);
            }
        }
        return res;
    }
};
