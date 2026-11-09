class Solution {
public:
    int compress(vector<char>& chars) {
        int i, j, k, count, coef = 10, len = 1;
        char prev = chars[0];
        count = 1;
        j = 0;
        for(i=1; i<chars.size(); i++){
            if(chars[i] != prev){
                chars[j] = prev;
                if(count > 1){
                    j += len;
                    k = j;
                    while(count > 0){
                        chars[k] = (char)(count%10) + '0';
                        count /= 10;
                        k--;
                    }
                }
                prev = chars[i];
                count = 1;
                len = 1;
                coef = 10;
                j++;
            }else{
                count++;
            }
            if(count >= coef){
                len++;
                coef *= 10;
            }
        }
        chars[j] = prev;
        if(count > 1){
            j += len;
            k = j;
            while(count > 0){
                chars[k] = (char)(count%10) + '0';
                count /= 10;
                k--;
            }
        }
        j++;

        chars.resize(j);

        return j;
    }
};
