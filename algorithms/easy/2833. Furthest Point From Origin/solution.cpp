class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r = 0, e = 0;
        for(char c: moves){
            if(c == 'L'){l++;}else if(c == 'R'){r++;}else{e++;}
        }
        return abs(l-r) + e;
    }
};
