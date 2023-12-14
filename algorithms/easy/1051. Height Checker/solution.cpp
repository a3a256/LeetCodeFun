class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp;
        temp = heights;
        int i, count;
        sort(heights.begin(), heights.end());
        count = 0;
        for(i=0; i<heights.size(); i++){
            if(heights[i] != temp[i]){
                count++;
            }
        }
        return count;
    }
};
