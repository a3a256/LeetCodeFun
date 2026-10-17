class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int i = 1, j = 0;
        int prev = colors[0], len = 0, res = 0;
        while(j<colors.size()){
            if(colors[i] == prev){
                if(i<j){return res;}
                j = i;
            }
            if(i<j){len = (i+1) + (colors.size()-j);}else{len = i-j+1;}
            prev = colors[i];
            if(len == k){
                res++;
                j++;
            }
            i = (i+1)%(colors.size());
        }
        return res;
    }
};
