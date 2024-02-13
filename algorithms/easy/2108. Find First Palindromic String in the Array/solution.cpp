class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int i, j, k, equal;
        for(i=0; i<words.size(); i++){
            j = 0;
            k = words[i].size()-1;
            equal = 1;
            while(j<=k){
                if(words[i][j] != words[i][k]){
                    equal = 0;
                    break;
                }
                j++;
                k--;
            }
            if(equal){
                return words[i];
            }
        }
        return "";
    }
};
