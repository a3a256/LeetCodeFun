class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int i, j, count;
        count = 0;
        for(i=0; i<fruits.size(); i++){
            for(j=0; j<baskets.size(); j++){
                if(fruits[i] <= baskets[j]){
                    baskets.erase(baskets.begin()+j);
                    count++;
                    break;
                }
            }
        }
        return fruits.size()-count;
    }
};
