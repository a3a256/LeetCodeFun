class Solution {
public:
    int minAddToMakeValid(string s) {
        int opening = 0, debt = 0;
        for(char c: s){
            if(c == '('){opening++;}
            else{
                if(opening == 0){debt ++;}else{opening--;}
            }
        }
        if(opening != 0){debt += opening;}
        return debt;
    }
};
