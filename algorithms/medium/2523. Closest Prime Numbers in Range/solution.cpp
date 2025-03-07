class Solution {
public:
    bool is_prime(int num){
        if(num == 1){
            return false;
        }
        int i;
        for(i=2; i<=sqrt(num); i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        int i, prev = -1, total_diff = INT_MAX;
        vector<vector<int>> arr;
        for(i=left; i<=right; i++){
            if(is_prime(i)){
                if(prev == -1){
                    prev = i;
                }else{
                    arr.push_back({prev, i, i-prev});
                    total_diff = min(i-prev, total_diff);
                    prev = i;
                }
            }
        }
        if(arr.size() == 0){
            return {-1, -1};
        }
        for(i=0; i<arr.size(); i++){
            if(arr[i][2] == total_diff){
                return {arr[i][0], arr[i][1]};
            }
        }
        return {-1, -1};
    }
};
