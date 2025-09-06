class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int, int> mp;
        int freq = INT_MAX;
        while(n>0){
            mp[n%10]++;
            n = n/10;
        }
        for(auto it: mp){
            freq = min(freq, it.second);
        }
        for(auto it: mp){
            if(freq == it.second){
                return it.first;
            }
        }
        return 0;
    }
};
