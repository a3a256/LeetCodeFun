class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> stk;
        string seq = "";
        int i;
        for(i=0; i<min(k, (int)s.size()); i++){
            seq += s[i];
        }
        stk.insert(seq);
        while(i<s.size()){
            seq += s[i];
            seq.erase(seq.begin()+0);
            stk.insert(seq);
            i++;
        }
        for(auto it: stk){
            cout << it << '\n';
        }
        return stk.size() >= pow(2, k);
    }
};
