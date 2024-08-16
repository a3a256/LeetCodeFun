class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int i, fives, tens;
        fives = 0;
        tens = 0;
        for(i=0; i<bills.size(); i++){
            if(bills[i] == 5){
                fives++;
            }else if(bills[i] == 10){
                if(fives >= 1){
                    fives--;
                    tens++;
                }else{
                    return false;
                }
            }else if(bills[i] == 20){
                if(tens >= 1 && fives >= 1){
                    fives--;
                    tens--;
                }else if(fives >= 3){
                    fives -= 3;
                }else{
                    return false;
                }
            }
        }

        return true;
    }
};
