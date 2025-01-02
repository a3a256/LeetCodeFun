class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> vowel_strings, res;
        int i, j, count;
        for(i=0; i<words.size(); i++){
            if((words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u') && (words[i].back() == 'a' || words[i].back() == 'e' || words[i].back() == 'i' || words[i].back() == 'o' || words[i].back() == 'u')){
                vowel_strings.push_back(i);
            }
        }
        for(i=0; i<queries.size(); i++){
            count = 0;
            for(j=0; j<vowel_strings.size(); j++){
                if(vowel_strings[j] <= queries[i][1] && vowel_strings[j] >= queries[i][0]){
                    count++;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};
