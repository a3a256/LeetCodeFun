class Solution {
public:
    int minimumLength(string s) {
        char cur;
        while(s.size() > 1){
            if(s[0] == s.back()){
                cur = s[0];
            }else{
                break;
            }
            while(s[0] == cur){
                s.erase(s.begin()+0);
                if(s.size() == 0){
                    break;
                }
            }
            if(s.size() != 0){
                while(s.back() == cur){
                    s.pop_back();
                    if(s.size() == 0){
                        break;
                    }
                }
            }
        }
        return (int)s.size();
    }
};
