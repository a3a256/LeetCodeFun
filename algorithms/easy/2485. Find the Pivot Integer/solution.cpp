class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1){
            return 1;
        }
        int left, right, i;
        left = 1;
        right = n;
        i = 0;
        while(left<right){
            i++;
            left = ((1+i)*i)/2;
            right = ((i+n)*(n-i+1))/2;
        }
        if(left == right){
            return i;
        }
        return -1;
    }
};
