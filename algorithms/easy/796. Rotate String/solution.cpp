class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        if(s == goal){
            return true;
        }
        int i, size;
        char c;
        size = s.size();
        for(i=0; i<size; i++){
            c = s[0];
            s.erase(s.begin()+0);
            s += c;
            if(s == goal){
                return true;
            }
        }
        return false;
    }
};
