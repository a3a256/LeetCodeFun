class Solution {
public:
    long arr[INT_MAX];
    int maximumGap(vector<int>& nums) {
        int i, diff, _max, prev, max_val, sum;
        max_val = INT_MIN;
        cout << max_val << '\n';
        for(i=0; i<nums.size(); i++){
            arr[nums[i]]++;
            max_val = max(nums[i], max_val);
        }
        bool start = true;
        sum = 0;
        _max = INT_MIN;
        for(i=1; i<=max_val; i++){
            if(start && arr[i] > 0){
                prev = i;
                start = false;
                sum++;
            }else if(arr[i]>0){
                diff = i-prev;
                _max = max(diff, _max);
                prev = i;
                sum++;
            }
        }
        if(sum<2){
            return 0;
        }
        return _max;
    }
};
