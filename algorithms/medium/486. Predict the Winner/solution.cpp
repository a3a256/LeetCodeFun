class Solution {
public:
    int search(int i, int j, vector<int>& arr, int turn){
        if(i == arr.size() || j == -1){
            return 0;
        }
        if(i>j){
            return 0;
        }
        if(turn == 0){
            return max(arr[i]+search(i+1, j, arr, 1), arr[j]+search(i, j-1, arr, 1));
        }else{
            return min(-arr[i]+search(i+1, j, arr, 0), -arr[j]+search(i, j-1, arr, 0));
        }
        return 0;
    }
    bool PredictTheWinner(vector<int>& nums) {
        int div = search(0, nums.size()-1, nums, 0);
        return div>=0;
    }
};
