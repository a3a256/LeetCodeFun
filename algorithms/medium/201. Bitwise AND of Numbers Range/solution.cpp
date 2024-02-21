class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        string l = bitset<32>(left).to_string();
        string r = bitset<32>(right).to_string();
        string line = "";
        int i;
        for(i=0; i<32; i++){
            if(l[i] == r[i]){
                line += l[i];
            }else{
                break;
            }
        }
        while(line.size()!=32){
            line += '0';
        }
        unsigned long ans = bitset<32>(line).to_ulong();
        return (int)ans;
    }
};
