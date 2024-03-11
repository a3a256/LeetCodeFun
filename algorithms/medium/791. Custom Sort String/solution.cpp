class Solution {
public:
    string customSortString(string order, string s) {
        map<char, int> one, two;
        for(char c: order){
            one[c]++;
        }
        for(char c: s){
            two[c]++;
        }
        string line = "";
        for(char c: order){
            if(two[c] != 0){
                string temp(two[c], c);
                line += temp;
            }
        }
        for(char c: s){
            if(one[c] == 0){
                line += c;
            }
        }
        return line;
    }
};
