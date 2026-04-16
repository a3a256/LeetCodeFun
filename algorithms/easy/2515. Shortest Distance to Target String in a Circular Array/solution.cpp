class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int i, found;
        found = 0;
        for(i=0; i<words.size(); i++){
            if(words[i] == target){
                found = 1;
                break;
            }
        }
        if(!found){return -1;}
        int left, right;
        left = 0;
        right = 0;
        i = startIndex;
        while(words[i] != target){
            right++;
            i = (i+1)%(words.size());
        }
        i = startIndex;
        while(words[i] != target){
            left++;
            i -= 1;
            if(i<0){
                i = words.size()-1;
            }
        }
        return min(left, right);
    }
};
