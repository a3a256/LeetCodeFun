class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n == 1 && trust.size() == 0){
            return n;
        }
        map<int, int> trustworthy, trusts;
        int i, a, b;
        a = -1;
        for(i=0; i<trust.size(); i++){
            trustworthy[trust[i][1]]++;
            trusts[trust[i][0]]++;
        }
        for(auto it: trustworthy){
            if(it.second == n-1){
                a = it.first;
            }
        }
        if(trusts[a] != 0){
            return -1;
        }
        return a;
    }
};
