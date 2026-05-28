class Solution {
public:
    string greatestLetter(string s) {
        map<char, int> lo, up;
        string ans = "";
        for(char c: s){
            if(c == tolower(c)){
                lo[c]++;
            }else{
                up[c]++;
            }
        }
        for(auto it: lo){
            if(up[toupper(it.first)] != 0){
                if(ans != ""){
                    ans.pop_back();
                }
                ans += toupper(it.first);
            }
        }
        return ans;
    }
};
