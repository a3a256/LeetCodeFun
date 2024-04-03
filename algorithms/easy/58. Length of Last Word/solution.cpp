class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s.back() == ' '){
            s.pop_back();
        }
        if(s.size() == 0){
            return 0;
        }
        int count = 0;
        while(s.back() != ' '){
            count ++;
            s.pop_back();
            if(s.size() == 0){
                break;
            }
        }
        return count;
    }
};
