class Solution {
public:
    int countSubstrings(string s) {
        int i, j, count = 0;
        string line;
        string reversed;
        i = 0;
        j = i+1;
        while(i<s.size()){
            line = s.substr(i, j-i);
            reversed = line;
            reverse(reversed.begin(), reversed.end());
            if(line == reversed){
                count++;
            }
            if(j<s.size()){
                j++;
            }else{
                i++;
                j = i+1;
            }
        }
        return count;
    }
};
