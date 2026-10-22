class Solution {
public:
    int get_next_num(int n){
        int d, res = 0;
        while(n>0){
            d = n%10;
            res += d*d;
            n /= 10;
        }
        return res;
    }

    bool isHappy(int n) {
        int fast = get_next_num(get_next_num(n));
        int slow = get_next_num(n);
        while(fast != slow){
            if(fast == 1){return true;}
            slow = get_next_num(slow);
            fast = get_next_num(get_next_num(fast));
        }
        return slow == 1;
    }
};
