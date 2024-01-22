class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s = bitset<64>(n).to_string();
        int i;
        for(i=0; i<s.size(); i++){
            if(s[i] == '1'){
                break;
            }
        }
        while(i<s.size()-1){
            if(s[i] == s[i+1]){
                return false;
            }
            i++;
        }
        return true;
    }
};
