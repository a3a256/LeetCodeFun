class Solution {
public:
    int findClosest(int x, int y, int z) {
        int one, two;
        one = abs(x-z);
        two = abs(y-z);
        if(one < two){return 1;}
        if(two < one){return 2;}
        return 0;
    }
};
