class Solution {
public:
    int arr[10001];
    vector<int> findErrorNums(vector<int>& nums) {
        int i, n=nums.size(), first, second;
        for(i=0; i<n; i++){
            arr[nums[i]]++;
        }
        for(i=1; i<=n; i++){
            if(arr[i] > 1){
                first = i;
            }else if(arr[i] == 0){
                second = i;
            }
        }
        return {first, second};
    }
};
