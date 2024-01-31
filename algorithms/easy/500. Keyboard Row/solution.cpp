class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char, int> mp = {{'q', 0}, {'w', 0}, {'e', 0}, {'r', 0}, {'t', 0},
                            {'y', 0}, {'u', 0}, {'i', 0}, {'o', 0}, {'p', 0},
                            {'a', 1}, {'s', 1}, {'d', 1}, {'f', 1}, {'g', 1},
                            {'h', 1}, {'j', 1}, {'k', 1}, {'l', 1}, {'z', 2},
                            {'x', 2}, {'c', 2}, {'v', 2}, {'b', 2}, {'n', 2},
                            {'m', 2}};
        int i, j, count;
        vector<string> v;
        set<int> stk;
        for(i=0; i<words.size(); i++){
            count = 0;
            for(j=0; j<words[i].size(); j++){
                stk.insert(mp[tolower(words[i][j])]);
            }
            if(stk.size() == 1){
                v.push_back(words[i]);
            }
            set<int>().swap(stk);
        }
        return v;
    }
};
