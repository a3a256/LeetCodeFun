class Solution {
public:
    int distinctPoints(string s, int k) {
        int x_end = 0, y_end = 0;
        set<pair<int,int>> stk;
        for(char c: s){
            if(c == 'U'){y_end++;}
            else if(c == 'D'){y_end--;}
            else if(c == 'L'){x_end--;}
            else if(c == 'R'){x_end++;}
        }
        int x_rev = 0, y_rev = 0;
        int end;
        for(end=0; end<k; end++){
            if(s[end] == 'U'){y_rev--;}
            else if(s[end] == 'D'){y_rev++;}
            else if(s[end] == 'L'){x_rev++;}
            else if(s[end] == 'R'){x_rev--;}
        }
        int start = 0;
        stk.insert({x_end+x_rev, y_end+y_rev});
        while(end < s.size()){
            if(s[end] == 'U'){y_rev--;}
            else if(s[end] == 'D'){y_rev++;}
            else if(s[end] == 'L'){x_rev++;}
            else if(s[end] == 'R'){x_rev--;}
            if(s[start] == 'U'){y_rev++;}
            else if(s[start] == 'D'){y_rev--;}
            else if(s[start] == 'L'){x_rev--;}
            else if(s[start] == 'R'){x_rev++;}
            start++;
            end++;
            stk.insert({x_end+x_rev, y_end+y_rev});
        }
        return stk.size();
    }
};
