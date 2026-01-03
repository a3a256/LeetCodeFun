class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.back() == 9){
            int i, prev;
            prev = 1;
            for(i=digits.size()-1; i>-1; i--){
                digits[i] += prev;
                prev = digits[i]/10;
                digits[i] = digits[i]%10;
            }
            if(prev > 0){
                digits[0] = digits[0]%10;
                digits.insert(digits.begin(), 1);
            }
        }else{
            digits.back()++;
        }
        return digits;
    }
};
