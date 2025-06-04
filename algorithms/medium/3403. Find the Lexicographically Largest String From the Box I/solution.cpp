class Solution {
public:
    string answerString(string word, int numFriends) {
        string res = "", cur = "";
        if(numFriends == 1){
            return word;
        }
        if(word.size() == numFriends){
            res += *max_element(word.begin(), word.end());
            return res;
        }
        int i;
        for(i=0; i<word.size() - (numFriends-1); i++){
            cur += word[i];
            res += word[i];
        }
        while(i<word.size()){
            cur.erase(cur.begin()+0);
            cur += word[i];
            if(cur > res){
                res = cur;
            }
            i++;
        }
        while(cur.size() > 0){
            if(cur > res){
                res = cur;
            }
            cur.erase(cur.begin()+0);
        }
        return res;
    }
};
