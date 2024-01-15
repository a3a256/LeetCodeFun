class Solution {
public:
    bool self_dividing(int n){
        int num = n;
        while(num!=0){
            if(num%10 == 0){
                return false;
            }
            if(n%(num%10) != 0){
                return false;
            }
            num /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        int i;
        vector<int> res;
        for(i=left; i<=right; i++){
            if(self_dividing(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};
