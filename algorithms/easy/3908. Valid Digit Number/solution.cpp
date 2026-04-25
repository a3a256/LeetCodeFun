class Solution {
public:
    bool validDigit(int n, int x) {
        int prev = 0, occ = 0;
        while(n>0){
            prev = n%10;
            if(prev == x){occ++;}
            n /= 10;
        }
        return (prev != x && occ >= 1);
    }
};
