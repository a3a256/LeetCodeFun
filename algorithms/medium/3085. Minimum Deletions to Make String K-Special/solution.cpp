class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char, int> mp;
        int i, res = INT_MAX, deletions = 0;
        for(i=0; i<word.size(); i++){
            mp[word[i]]++;
        }
        for(auto it: mp){
            deletions = 0;
            for(auto ti: mp){
                if(it.first != ti.first){
                    if(ti.second < it.second){
                        deletions += ti.second;
                    }else if(ti.second - it.second > k){
                        deletions += (ti.second - it.second)-k;
                    }
                }
            }
            res = min(res, deletions);
        }
        return res;
    }
};
