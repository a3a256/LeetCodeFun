class Solution {
public:
    int largestInteger(int n, int s) {
        if(s == 0){return s;}
        int i = 0, j = 1, k;
        int digs;
        while(i<n){
            j *= 10;
            i++;
        }
        j--;
        while(j>0){
            k = j;
            digs = 0;
            while(k>0){
                digs += k%10;
                k = k/10;
            }
            if(digs == s){return j;}
            j--;
        }
        return -1;
    }
};
