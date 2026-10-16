class Solution {
public:
    int countVowelSubstrings(string word) {
        map<char, int> mp, qp;
        int i, j = -1, k;
        int res = 0;
        for(i=0; i<word.size(); i++){
            if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u'){
                j = -1;
                mp['a'] = 0;mp['e'] = 0;mp['i'] = 0;mp['o'] = 0;mp['u'] = 0;
            }else{
                if(j == -1){
                    j = i;
                }
                mp[word[i]]++;
                k = j;
                qp = mp;
                while(qp['a'] >= 1 && qp['e'] >= 1 && qp['i'] >= 1 && qp['o'] >= 1 && qp['u'] >= 1){
                    qp[word[k]]--;
                    k++;
                    res++;
                }
            }
        }
        return res;
    }
};
