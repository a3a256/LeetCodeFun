class Solution {
public:
    int smallestNumber(int n) {
        string binary = bitset<16>(n).to_string();
        while(binary[0] == '0'){
            binary.erase(binary.begin()+0);
        }
        int i = 0, ans = 0;
        for(i=0; i<binary.size(); i++){
            ans += pow(2, i);
        }
        return ans;
    }
};
