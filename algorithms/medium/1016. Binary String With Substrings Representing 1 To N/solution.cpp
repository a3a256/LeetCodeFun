class Solution {
public:
    bool queryString(string s, int n) {
        int i, j = 0;
        string line = "", temp;
        map<int, int> mp;
        for(i=0; i<s.size(); i++){
            line += s[i];
            temp = line;
            while(temp.size() != 0){
                mp[stol(temp, nullptr, 2)]++;
                temp.erase(temp.begin()+0);
            }
            if(i-j+1 == 32){
                line.erase(line.begin()+0);
                j++;
            }
        }
        for(i=1; i<=n; i++){
            if(mp[i] == 0){return false;}
        }
        return true;
    }
};
