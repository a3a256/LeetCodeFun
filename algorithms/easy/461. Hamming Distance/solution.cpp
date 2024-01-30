class Solution {
public:
    int hammingDistance(int x, int y) {
        string one = bitset<64>(x).to_string();
        string two = bitset<64>(y).to_string();
        int i, dist;
        dist = 0;
        for(i=0; i<one.size(); i++){
            if(one[i] != two[i]){
                dist++;
            }
        }
        return dist;
    }
};
