class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string n = to_string(num);
        string sub = n.substr(0, k);
        int cur = stoi(sub), res = 0;
        int i;
        for(i=k; i<n.size(); i++){
            if(cur != 0 && num%cur == 0){res++;}
            sub.erase(sub.begin()+0);
            sub += n[i];
            cur = stoi(sub);
        }
        res += (cur != 0 && num%cur == 0);
        return res;
    }
};
