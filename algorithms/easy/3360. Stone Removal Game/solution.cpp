class Solution {
public:
    bool canAliceWin(int n) {
        bool a, b;
        int stones = 10;
        a = true;
        b = false;
        while(n>=0){
            n -= stones;
            stones --;
            a = (a)?false:true;
            b = (b)?false:true;
        }
        return a;
    }
};
