class Solution {
public:
    int reverseBits(int n) {
        string binary = bitset<32>(n).to_string();
        int i, res;
        res = 0;
        for(i=0; i<32; i++){
            if(binary[i] == '1'){res += pow(2, i);}
        }
        return res;
    }
};
