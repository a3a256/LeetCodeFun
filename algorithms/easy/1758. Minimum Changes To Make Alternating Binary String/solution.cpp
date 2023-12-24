class Solution {
public:
    int minOperations(string s) {
        char l = '0', r = '1';
        int i, one, two;
        one = 0;
        two = 0;
        for(i=0; i<s.size(); i++){
            if(l == s[i]){
                one++;
            }
            if(r == s[i]){
                two++;
            }
            if(l == '0'){
                l = '1';
            }else if(l == '1'){
                l = '0';
            }
            if(r == '0'){
                r = '1';
            }else if(r == '1'){
                r = '0';
            }
        }
        return min(two, one);
    }
};
