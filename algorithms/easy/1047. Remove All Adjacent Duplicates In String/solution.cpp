class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        while(i<s.size()-1 && s.size()>1){
            if(s[i] == s[i+1]){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                if(i > 0){
                    i--;
                }
            }else{
                i++;
            }
        }
        return s;
    }
};
