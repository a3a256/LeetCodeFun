class Solution {
public:
    int smallestNumber(int n, int t) {
        int k, temp;
        bool found = false;
        while(!found){
            k = n;
            temp = 1;
            while(k>0){
                temp *= k%10;
                k/=10;
            }
            if(temp%t == 0){found=true;}else{n++;}
        }
        return n;
    }
};
