class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int i, j, count;
        count = 0;
        for(i=0; i<strs[0].size(); i++){
            for(j=1; j<strs.size(); j++){
                if(strs[j][i] < strs[j-1][i]){
                    count ++;
                    break;
                }
            }
        }

        return count;
    }
};
