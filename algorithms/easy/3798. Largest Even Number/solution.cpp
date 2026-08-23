class Solution {
public:
    string largestEven(string s) {
        while(s.size() != 0){if(s.back() != '1'){break;}else{s.pop_back();}}
        return s;
    }
};
