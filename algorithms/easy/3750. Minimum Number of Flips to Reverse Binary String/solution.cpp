class Solution {
public:
    int minimumFlips(int n) {
        string b = bitset<32>(n).to_string();
        while(b[0] == '0'){
            b.erase(b.begin()+0);
        }
        int i, j, flips;
        i = 0;
        j = b.size()-1;
        flips = 0;
        while(i<j){
            flips += b[i] != b[j];
            i++;
            j--;
        }
        return flips*2;
    }
};
