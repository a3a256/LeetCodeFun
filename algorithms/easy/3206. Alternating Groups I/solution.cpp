class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int i, count = 0;
        for(i=0; i<colors.size(); i++){
            if(i == 0){
                if(colors[i] != colors.back() && colors[i] != colors[i+1]){
                    count++;
                }
            }else if(i == colors.size()-1){
                if(colors[i] != colors[i-1] && colors[i] != colors[0]){
                    count++;
                }
            }else{
                if(colors[i] != colors[i-1] && colors[i] != colors[i+1]){
                    count++;
                }
            }
        }
        return count;
    }
};
