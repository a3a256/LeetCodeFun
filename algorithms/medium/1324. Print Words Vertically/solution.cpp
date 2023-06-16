class Solution {
public:
    vector<string> printVertically(string s) {
        char stop = ' ';
        vector<string> words;
        string line = "";
        int largest = 0;
        int i;
        for(i=0; i<s.size(); i++){
            if(s[i] == stop){
                if(line.size() > largest){
                    largest = line.size();
                }
                words.push_back(line);
                line = "";
            }else{
                line += s[i];
            }
        }

        if(line != ""){
            words.push_back(line);
            if(line.size() > largest){
                largest = line.size();
            }
            line = "";
        }
        int k = 0;
        vector<string> res;
        while(k<largest){
            line = "";
            for(i=0; i<words.size(); i++){
                if(k >= words[i].size()){
                    line += ' ';
                }else{
                    line += words[i][k];
                }
            }
            while(line[line.size()-1] == ' '){
                line.pop_back();
            }
            res.push_back(line);
            k ++;
        }

        return res;
    }
};
