class Solution {
public:
    int minFlips(string target) {
        while(target[0] == '0'){
            target.erase(target.begin()+0);
        }
        int back = 0;
        while(target.size() != 0 && target.back() == '0'){
            target.pop_back();
            back = 1;
        }
        if(target.size() == 0){
            return 0;
        }
        string uniques = "";
        int i;
        char prev = target[0];
        uniques += target[0];
        for(i=1; i<target.size(); i++){
            if(target[i] != prev){
                uniques += target[i];
            }
            prev = target[i];
        }
        int steps = 1 + back;
        for(i=0; i<uniques.size(); i++){
            if(uniques[i] == '0'){
                steps += 2;
            }
        }
        return steps;
    }
};
