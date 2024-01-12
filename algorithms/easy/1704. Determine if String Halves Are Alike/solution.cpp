class Solution {
public:
    bool check_vowels(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    bool halvesAreAlike(string s) {
        int i, j, left, right;
        i = 0;
        j = s.size()-1;
        left = 0;
        right = 0;
        while(i<j){
            if(check_vowels(tolower(s[i]))){
                left++;
            }
            if(check_vowels(tolower(s[j]))){
                right++;
            }
            i++;
            j--;
        }
        return left == right;
    }
};
