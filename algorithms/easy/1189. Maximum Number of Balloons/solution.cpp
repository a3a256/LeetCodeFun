class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> mp;
        for(char c: text){
            if(c == 'a' || c == 'b' || c == 'o' || c == 'l' || c == 'n'){
                mp[c]++;
            }
        }
        int ans = 0;
        ans = min(mp['a'], min(mp['b'], mp['n']));
        ans = min(ans, min(mp['l']/2, mp['o']/2));
        return ans;
    }
};
