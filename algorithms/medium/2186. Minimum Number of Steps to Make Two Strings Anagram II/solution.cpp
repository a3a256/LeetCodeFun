class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> first;
        map<char, int> second;
        int count;
        count = 0;
        for(char c: s){
            first[c] ++;
        }
        for(char c: t){
            second[c] ++;
        }
        for(auto it: first){
            if(second.find(it.first) != second.end()){
                if(second[it.first] >= it.second){
                    second[it.first] -= it.second;
                    first[it.first] = 0;
                }else{
                    first[it.first] -= second[it.first];
                    second[it.first] = 0;
                }
            }
        }
        for(auto it: first){
            count += it.second;
        }
        for(auto it: second){
            count += it.second;
        }
        return count;
    }
};
