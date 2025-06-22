class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int steps = 0;
        while(target > 1){
            if(target%2 != 0){
                target -= 1;
                steps++;
            }else{
                if(maxDoubles>0){
                    target = target/2;
                    steps++;
                    maxDoubles--;
                }else{
                    steps += target-1;
                    target = 1;
                }
            }
        }
        return steps;
    }
};
