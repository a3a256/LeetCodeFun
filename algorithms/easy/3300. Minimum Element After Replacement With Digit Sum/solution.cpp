class Solution {
public:
    int minElement(vector<int>& nums) {
        int num = 0, m = INT_MAX;
        for(int n: nums){
            num = 0;
            while(n>0){
                num += n%10;
                n /= 10;
            }
            m = min(m, num);
        }
        return m;
    }
};
