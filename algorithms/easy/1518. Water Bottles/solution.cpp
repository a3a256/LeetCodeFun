class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = 0, full = numBottles, empty = 0, drunk = 0;
        while(numBottles >= numExchange){
            count += full;
            drunk = full;
            full = drunk/numExchange;
            empty += drunk%numExchange;
            numBottles = full+empty;
            if(full == 0){
                full = empty/numExchange;
                empty = empty%numExchange;
            }
        }
        return count + full;
    }
};
