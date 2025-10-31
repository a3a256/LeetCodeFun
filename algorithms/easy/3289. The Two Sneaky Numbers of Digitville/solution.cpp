class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int arr[101];
        vector<int> v;
        for(int i: nums){
            if(arr[i] != 0){
                v.push_back(i);
            }
            arr[i]++;
        }
        return v;
    }
};
