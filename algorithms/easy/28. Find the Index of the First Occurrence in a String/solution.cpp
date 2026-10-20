class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, j;
        int h = haystack.size(), n = needle.size();
        for(i=0; i<=h-n; i++){
            j = 0;

            while(j < n && needle[j] == haystack[i+j]){
                j++;
            }

            if(j == n){
                return i;
            }
        }
        return -1;
    }
};
