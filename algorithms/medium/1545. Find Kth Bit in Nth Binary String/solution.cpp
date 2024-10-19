class Solution {
public:
    string reverse_invert(string s){
        int i, j;
        char c;
        for(i=0; i<s.size(); i++){
            if(s[i] == '0'){
                s[i] = '1';
            }else{
                s[i] = '0';
            }
        }
        i = 0; j = s.size()-1;
        while(i<j){
            c = s[i];
            s[i] = s[j];
            s[j] = c;
            i++;
            j--;
        }
        return s;
    }
    char findKthBit(int n, int k) {
        string s = "0";
        int i;
        for(i=0; i<n-1; i++){
            s = s + '1' + reverse_invert(s);
        }
        return s[k-1];
    }
};
