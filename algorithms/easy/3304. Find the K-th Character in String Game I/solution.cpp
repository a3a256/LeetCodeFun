class Solution {
public:
    char kthCharacter(int k) {
        string cur = "a";
        if(k == 1){
            return cur[0];
        }
        map<char, char> mp = {{'a', 'b'}, {'b', 'c'}, {'c', 'd'},
                              {'d', 'e'}, {'e', 'f'}, {'f', 'g'},
                              {'g', 'h'}, {'h', 'i'}, {'i', 'j'},
                              {'j', 'k'}, {'k', 'l'}, {'l', 'm'},
                              {'m', 'n'}, {'n', 'o'}, {'o', 'p'},
                              {'p', 'q'}, {'q', 'r'}, {'r', 's'},
                              {'s', 't'}, {'t', 'u'}, {'u', 'v'},
                              {'v', 'w'}, {'w', 'x'}, {'x', 'y'},
                              {'y', 'z'}, {'z', 'a'}};
        int n, i;
        while(cur.size() < k){
            n = cur.size();
            for(i=0; i<n; i++){
                cur += mp[cur[i]];
            }
        }
        return cur[k-1];
    }
};
