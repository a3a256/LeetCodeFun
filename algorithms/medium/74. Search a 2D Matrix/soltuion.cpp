class Solution {
public:
    bool search(vector<int>& arr, int target){
        int start = 0;
        int end = arr.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[mid] == target){
                return true;
            }else if(arr[mid] > target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return false;
    }
    bool search_row(vector<vector<int>>& m, int target){
        int start = 0;
        int end = m.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(m[mid].front() <= target && m[mid].back() >= target){
                return search(m[mid], target);
            }else if(m[mid].back()<=target){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.back().back()<target || matrix.front().front() > target){
            return false;
        }
        return search_row(matrix, target);
    }
};
