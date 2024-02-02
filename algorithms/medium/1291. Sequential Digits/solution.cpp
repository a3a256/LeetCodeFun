class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<long> add = {11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};
        vector<int> all, res;
        long i, value, end, starter;
        starter = 12;
        value = starter;
        end = 3;
        for(i=0; i<add.size(); i++){
            while(value%10 != 0){
                all.push_back(value);
                value += add[i];
            }
            value = starter*10+end;
            starter = value;
            end += 1;
        }
        for(i=0; i<all.size(); i++){
            if(all[i] >= low && all[i] <= high){
                res.push_back(all[i]);
            }
        }
        return res;
    }
};
