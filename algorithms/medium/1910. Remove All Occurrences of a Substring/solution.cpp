class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t found;
        int index;
        int n = part.size();
        while(true){
            found = s.find(part);
            if(found != string::npos){
                index = static_cast<int>(found);
                s.erase(s.begin()+index, s.begin()+index+n);
            }else{
                break;
            }
        }

        return s;
    }
};
