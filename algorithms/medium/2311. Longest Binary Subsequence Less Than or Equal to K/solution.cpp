class Solution {
public:
    int longestSubsequence(string s, int k) {
        long long index, i, count = 0;
        double cur_val = 0.0;
        index = 0;
        for(i=s.size()-1; i>-1 && cur_val <= (double)k; i--){
            if(s[i] == '1'){
                cur_val += (double)pow(2, index);
            }
            index++;
            count++;
        }
        if(cur_val > (double)k){
            count--;
        }
        while(i>-1){
            if(s[i] == '0'){
                count++;
            }
            i--;
        }
        return count;
    }
};
