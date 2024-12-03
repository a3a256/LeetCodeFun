class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string line = "";
        size_t pos;
        int count = 0;
        for(char c: sentence){
            if(c == ' '){
                pos = line.find(searchWord);
                line = "";
                count++;
                if(pos != string::npos){
                    if(pos == 0){
                        return count;
                    }
                }
            }else{
                line += c;
            }
        }
        pos = line.find(searchWord);
        count++;
        if(pos != string::npos){
            if(pos == 0){
                return count;
            }
        }
        return -1;
    }
};
