class Solution {
public:
    bool prime(int n){
        if(n < 2){return false;}
        for(int i=2; i<=sqrt(n); i++){
            if(n%i == 0){return false;}
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        string binary;
        int bits, res;
        res = 0;
        while(left<=right){
            binary = bitset<32>(left).to_string();
            bits = 0;
            for(char c: binary){
                if(c == '1'){bits++;}
            }
            if(prime(bits)){res++;}
            left++;
        }
        return res;
    }
};
