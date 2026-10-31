class Solution {
public:
    int countOfSubstrings(string word, int k) {
        map<char, int> mp = {{'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0}};
        map<char, int> qp;
        int consonants = 0, back;
        int i, j = 0, l;
        int res = 0;
        for(i=0; i<word.size(); i++){
            if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u'){
                consonants++;
            }else{
                mp[word[i]]++;
            }
            while(consonants > k){
                if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
                    consonants--;
                }else{
                    mp[word[j]]--;
                }
                j++;
            }
            back = consonants;
            qp = mp;
            l = j;
            while(qp['a'] >= 1 && qp['e'] >= 1 && qp['i'] >= 1 && qp['i'] >= 1 && qp['o'] >= 1 && qp['u'] >= 1 && back == k){
                res++;
                if(word[l] != 'a' && word[l] != 'e' && word[l] != 'i' && word[l] != 'o' && word[l] != 'u'){
                    back--;
                }else{
                    qp[word[l]]--;
                }
                l++;
            }
        }
        return res;
    }
};
