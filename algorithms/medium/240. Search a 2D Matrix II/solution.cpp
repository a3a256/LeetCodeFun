class Solution {
public:
    int find(vector<int> &arr, int start, int end, int target){
        if(start > end){
            return -1;
        }
        int mid = (start+end)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            return find(arr, mid+1, end, target);
        }else if(arr[mid] > target){
            return find(arr, start, mid-1, target);
        }

        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int last_row = matrix.size() - 1;
        int last_column = matrix[0].size() - 1;
        if(target > matrix[last_row][last_column]){
            return false;
        }

        if(target < matrix[0][0]){
            return false;
        }

        int i, res;
        for(i=0; i<matrix.size(); i++){
            res = find(matrix[i], 0, last_column, target);
            if(res != -1){
                return true;
            }
        }

        return false;
    }
};
