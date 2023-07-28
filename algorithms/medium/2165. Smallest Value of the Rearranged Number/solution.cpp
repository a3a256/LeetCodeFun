class Solution {
public:
    struct cmp{
        inline bool operator() (int a, int b){
            return a>b;
        }
    };
    long long smallestNumber(long long num) {
        if(num<=10 && num>=-10){
            return num;
        }
        vector<int> vals;
        int sign = (num<0)?-1:1;
        num = abs(num);
        while(num>0){
            vals.push_back(num%10);
            num = num/10;
        }
        if(sign == -1){
            sort(vals.begin(), vals.end(), cmp());
        }else{
            sort(vals.begin(), vals.end());
            int backup;
            int j = 0;
            while(vals[j] == 0){
                j ++;
            }
            if(j != 0){
                backup = vals[j];
                vals.erase(vals.begin()+j);
                vals.insert(vals.begin()+0, backup);
            }
        }
        long long st = 1;
        long long value = 0;
        for(int i=vals.size()-1; i>-1; i--){
            value += vals[i]*st;
            st = st*10;
        }
        value *= sign;
        return value;
    }
};
