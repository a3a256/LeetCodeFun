class Solution {
public:
    bool isCircularSentence(string sentence) {
        std::vector<string> v;
        int i;
        string line = "";
        for(i=0; i<sentence.size(); i++){
            if(sentence[i] == ' '){
                v.push_back(line);
                line = "";
            }else{
                line += sentence[i];
            }
        }
        if(line.size() != 0){
            v.push_back(line);
        }
        if(v.size() == 1){
            return v[0][0] == v[0].back();
        }
        char first_char = v[0][0];
        char cur = v[0].back();
        for(i=1; i<v.size(); i++){
            if(v[i][0] == cur){
                cur = v[i].back();
            }else{
                return false;
            }
        }

        return cur == first_char;
    }
};
