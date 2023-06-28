class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int i;
        map<char, map<int, int>> mp;
        for(i=0; i<garbage.size(); i++){
            for(char c: garbage[i]){
                mp[c][i] ++;
            }
        }

        int sum = 0;
        int pos;

        for(auto it: mp){
            pos = 0;
            for(auto ti: it.second){
                sum += ti.second;
                pos = max(ti.first, pos);
            }
            if(pos != 0){
                sum += accumulate(travel.begin(), travel.begin()+pos, 0);
            }
        }

        return sum;
    }
};
