class Solution {
public:
    int minBitFlips(int start, int goal) {
        string s = bitset<64>(start).to_string();
        string g = bitset<64>(goal).to_string();
        reverse(s.begin(), s.end());
        reverse(g.begin(), g.end());
        while(s.back() == '0'){
            s.pop_back();
            if(s.size() == 0){
                break;
            }
        }


        while(g.back() == '0'){
            g.pop_back();
            if(g.size() == 0){
                break;
            }
        }

        int len = max(g.size(), s.size());
        while(s.size()<len){
            s += '0';
        }
        while(g.size()<len){
            g += '0';
        }
        int i, count;
        count = 0;
        for(i=0; i<len; i++){
            if(s[i] != g[i]){
                count++;
            }
        }
        return count;
    }
};
