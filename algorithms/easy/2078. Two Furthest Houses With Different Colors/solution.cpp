class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i = 0, j = colors.size()-1;
        int right, left;
        right = 0;
        left = 0;
        while(i<colors.size()){
            if(colors[0] != colors[i]){
                right = i;
            }
            if(colors.back() != colors[j]){
                left = j;
            }
            i++;
            j--;
        }
        return max(right, (int)colors.size()-1-left);
    }
};
