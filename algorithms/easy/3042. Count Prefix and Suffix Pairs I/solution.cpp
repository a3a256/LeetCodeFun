class Solution {
public:

    bool isPrefixAndSuffix(string &str1, string &str2){
        int i, j;
        for(i=0; i<str1.size(); i++){
            if(str1[i] != str2[i]){
                return false;
            }
        }
        j = str2.size()-1;
        for(i=str1.size()-1; i>-1; i--){
            if(str1[i] != str2[j]){
                return false;
            }
            j--;
        }
        return true;
    }


    int countPrefixSuffixPairs(vector<string>& words) {
        int count, i, j;
        count = 0;
        for(i=0; i<words.size()-1; i++){
            for(j=i+1; j<words.size(); j++){
                if(words[i].size() <= words[j].size()){
                    if(isPrefixAndSuffix(words[i], words[j])){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
