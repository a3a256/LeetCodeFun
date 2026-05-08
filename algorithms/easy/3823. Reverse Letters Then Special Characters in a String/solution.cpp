class Solution {
public:
    string reverseByType(string s) {
        int i = 0, j = s.size()-1;
        char c;
        while(i<j){
            if((s[i] >= 'a' && s[i] <= 'z') && (s[j] >= 'a' && s[j] <= 'z')){
                c = s[i];
                s[i] = s[j];
                s[j] = c;
                i++;
                j--;
            }else if(s[i] >= 'a' && s[i] <= 'z'){
                j--;
            }else if(s[j] >= 'a' && s[j] <= 'z'){
                i++;
            }else{
                i++;
                j--;
            }
        }
        i = 0;
        j = s.size()-1;
        while(i<j){
            if((s[i] >= 'a' && s[i] <= 'z') && (s[j] >= 'a' && s[j] <= 'z')){
                i++;
                j--;
            }else if(s[i] >= 'a' && s[i] <= 'z'){
                i++;;
            }else if(s[j] >= 'a' && s[j] <= 'z'){
                j--;
            }else{
                c = s[i];
                s[i] = s[j];
                s[j] = c;
                i++;
                j--;
            }
        }
        return s;
    }
};
