class Solution {
public:
    int maxDepth(string s) {
        int cur_depth = 0, max_depth = 0;
        for(char c: s){
            if(c == '('){cur_depth++;}
            else if(c == ')'){max_depth = max(max_depth, cur_depth);cur_depth--;}
        }
        return max_depth;
    }
};
