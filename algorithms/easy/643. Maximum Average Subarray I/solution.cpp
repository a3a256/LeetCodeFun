class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double _sum = (double)accumulate(nums.begin(), nums.begin()+k, 0);
        double total = (double)k;
        double avg = _sum/total;
        double temp;
        if(nums.size() == k){
            return avg;
        }
        int i;
        for(i=k; i<nums.size(); i++){
            _sum -= (double)nums[i-k];
            _sum += (double)nums[i];
            temp = _sum/total;
            avg = max(temp, avg);
        }

        return avg;
    }
};
