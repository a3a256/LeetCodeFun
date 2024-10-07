class Solution {
public:
    int minLength(string s) {
        bool present = true;;
        while(present){
            size_t pos_one = s.find("AB");
            size_t pos_two = s.find("CD");
            if(pos_one == string::npos && pos_two == string::npos){
                present = false;
            }else if(pos_one != string::npos && pos_two != string::npos){
                if(pos_one > pos_two){
                    s = s.substr(0, (int)pos_two) + s.substr((int)pos_two+2);
                    s = s.substr(0, (int)pos_one-2) + s.substr((int)pos_one);
                }else{
                    s = s.substr(0, (int)pos_one) + s.substr((int)pos_one+2);
                    s = s.substr(0, (int)pos_two-2) + s.substr((int)pos_two);
                }
            }else if(pos_one != string::npos){
                s = s.substr(0, (int)pos_one) + s.substr((int)pos_one+2);
            }else if(pos_two != string::npos){
                s = s.substr(0, (int)pos_two) + s.substr((int)pos_two+2);
            }
        }
        return (int)s.size();
    }
};
