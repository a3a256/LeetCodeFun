class Solution {
public:
    int mirrorDistance(int n) {
        int reversed = 0;
        int k = n;
        while(k>0){
            reversed *= 10;
            reversed += k%10;
            k /= 10;
        }
        return abs(n - reversed);
    }
};
