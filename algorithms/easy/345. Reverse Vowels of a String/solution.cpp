class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size()-1;
        char l, r, c;
        bool left, right;
        while(i<=j){
            l = tolower(s[i]);
            r = tolower(s[j]);
            left = (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u');
            right = (r == 'a' || r == 'e' || r == 'i' || r == 'o' || r == 'u');
            if(left && right){
                c = s[i];
                s[i] = s[j];
                s[j] = c;
                i++;
                j--;
            }else if(left && !right){
                j--;
            }else if(!left && right){
                i++;
            }else{
                i++;
                j--;
            }
        }
        return s;
    }
};
