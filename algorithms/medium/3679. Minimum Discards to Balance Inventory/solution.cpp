class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        int mp[100001] = {};
        int i, j = 0, res = 0, l;
        for(i=0; i<arrivals.size(); i++){
            if(mp[arrivals[i]] == m){
                arrivals[i] = -1;
                res++;
            }else{
                mp[arrivals[i]]++;
            }
            if(i-j+1 == w){
                if(arrivals[j] != -1){mp[arrivals[j]]--;}
                j++;
            }
        }
        return res;
    }
};
