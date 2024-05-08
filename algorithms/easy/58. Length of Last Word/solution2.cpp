class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s.back() == ' '){
            s.pop_back();
        }
        int count = 0;
        while(s.back() != ' '){
            s.pop_back();
            count++;
            if(s.empty()){
                break;
            }
        }
        return count;
    }
};
