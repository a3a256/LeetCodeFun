class Solution {
public:
    int arr[100001];
    int missingNumber(vector<int>& nums) {
        int i, j, n;
        n = (int)nums.size();
        i = 0;
        j = n-1;
        while(i<=j){
            arr[nums[i]]++;
            arr[nums[j]]++;
            i++;
            j--;
        }
        i = 0;
        j = n;
        while(i<=j){
            if(arr[i] == 0){
                return i;
            }
            if(arr[j] == 0){
                return j;
            }
            i++;
            j--;
        }
        return -1;
    }
};
