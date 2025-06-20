class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int distance = 0;
        while(mainTank >= 5 && additionalTank > 0){
            mainTank ++;
            additionalTank --;
            distance += 50;
            mainTank -= 5;
        }
        distance += mainTank*10;
        return distance;
    }
};
