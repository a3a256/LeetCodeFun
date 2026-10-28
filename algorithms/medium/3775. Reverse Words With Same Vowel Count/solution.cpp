class Solution {
public:
    string reverseWords(string s) {
        int og_vowels = -1, cur_vowels = 0;
        int i, j = 0, k;
        for(i=0; i<s.size(); i++){
            if(s[i] == ' ' || i == s.size()-1){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    cur_vowels++;
                }
                if(og_vowels == -1){
                    og_vowels = cur_vowels;
                }else{
                    if(cur_vowels == og_vowels){
                        k = (i == s.size()-1)?i:i-1;
                        while(j<k){
                            swap(s[j], s[k]);
                            j++;
                            k--;
                        }
                    }
                }
                cur_vowels = 0;
                j = i+1;
            }else{
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    cur_vowels++;
                }
            }
        }
        return s;
    }
};
