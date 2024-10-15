class Solution {
public:
    long long minimumSteps(string s) {
        long long steps, zeros;
        int i;
        i = s.size()-1;
        while(s[i] == '1'){
            i--;
            if(i<0){
                return 0;
            }
        }
        steps = 0;
        zeros = 0;
        while(i>-1){
            if(s[i] == '0'){
                zeros++;
            }else{
                steps += zeros;
            }
            i--;
        }
        return steps;
    }
};
