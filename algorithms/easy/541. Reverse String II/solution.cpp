class Solution {
public:
    string reverseStr(string s, int k) {
        int coef = k*2;
        int i, l, j;
        char c;
        for(i=0; i<s.size(); i += coef){
            l = i;
            j = min((int)s.size()-1, i+k-1);
            while(l<=j){
                c = s[j];
                s[j] = s[l];
                s[l] = c;
                l++;
                j--;
            }
        }
        return s;
    }
};
