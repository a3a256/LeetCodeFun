class Solution {
public:
    string compressedString(string word) {
        int count = 0, i;
        string res = "";
        for(i=0; i<word.size()-1; i++){
            count ++;
            if(word[i] != word[i+1] || count == 9){
                res += to_string(count);
                res += word[i];
                count = 0;
            }
        }
        count ++;
        res += to_string(count);
        res += word[i];

        return res;
    }
};
