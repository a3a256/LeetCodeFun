class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = (int)rolls.size() + n;
        int total_sum = mean*m;
        int rolls_sum = accumulate(rolls.begin(), rolls.end(), 0);
        int remaining = total_sum - rolls_sum;
        int ordinary_val = remaining/n;
        if(ordinary_val>6 || ordinary_val<1){
            return {};
        }
        int vals_to_add = remaining%n;
        if(ordinary_val == 6 && vals_to_add > 0){
            return {};
        }
        vector<int> res(n, ordinary_val);
        int i = 0;
        while(vals_to_add>0){
            if(i<n){
                if(res[i] < 6){
                    res[i] ++;
                    vals_to_add --;
                }
                i++;
            }else{
                i = 0;
            }
        }
        return res;
    }
};
