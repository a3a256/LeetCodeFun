class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string, int> common_words;
        int i;
        string line = "";
        string alp = "abcdefghijklmnopqrstuvwxyz";
        for(i=0; i<paragraph.size(); i++){
            if(alp.find(tolower(paragraph[i])) != string::npos){
                line += tolower(paragraph[i]);
            }else{
                if(line.size() > 0){
                    if(find(banned.begin(), banned.end(), line) == banned.end()){
                        cout << line << ' ';
                        common_words[line]++;
                    }
                    line = "";
                }
            }
        }
        if(line.size() > 0){
            if(find(banned.begin(), banned.end(), line) == banned.end()){
                common_words[line]++;
                cout << line;
            }
        }
        int freq = INT_MIN;
        for(auto it: common_words){
            freq = max(it.second, freq);
        }
        for(auto it: common_words){
            if(it.second == freq){
                return it.first;
            }
        }
        return "";
    }
};
