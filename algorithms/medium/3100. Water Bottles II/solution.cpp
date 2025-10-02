class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int count = 0, drunk = 0, full = numBottles, empty = 0;
        while(numBottles >= numExchange){
            if(full >= numExchange){
                count += full;
                drunk = full;
                empty = drunk;
                full = 0;
            }else if(empty >= numExchange){
                full += 1;
                empty -= numExchange;
                numExchange++;
            }else{
                count += full;
                empty += full;
                full = 0;
            }
            numBottles = full + empty;
        }
        return count+full;
    }
};
