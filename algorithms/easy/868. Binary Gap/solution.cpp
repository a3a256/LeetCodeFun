class Solution {
public:
    int binaryGap(int n) {
        string binary = bitset<32>(n).to_string();
        int last = -1;
        int i, dist = 0;
        for(i=0; i<32; i++){
            if(binary[i] == '1'){
                if(last == -1){
                    last = i;
                }else{
                    dist = max(dist, i-last);
                    last = i;
                }
            }
        }
        return dist;
    }
};
