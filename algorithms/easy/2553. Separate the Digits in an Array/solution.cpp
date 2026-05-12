class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        int i, n, t;
        for(i=nums.size()-1; i>-1; i--){
            n = nums[i];
            while(n != 0){
                res.push_back(n%10);
                n/=10;
            }
        }
        i = 0;
        n = res.size()-1;
        while(i<=n){
            t = res[i];
            res[i] = res[n];
            res[n] = t;
            i++;
            n--;
        }
        return res;
    }
};
