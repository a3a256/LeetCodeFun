class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i, index;
        index = 0;
        string line = "";
        for(i=0; i<s.size(); i++){
            if(index<spaces.size()){
                if(i == spaces[index]){
                    line += ' ';
                    index++;
                }
            }
            line += s[i];
        }
        return line;
    }
};
