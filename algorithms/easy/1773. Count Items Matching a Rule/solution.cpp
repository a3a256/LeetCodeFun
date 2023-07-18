class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        map<string, int> mp = {{"type", 0}, {"color", 1}, {"name", 2}};
        int index = mp[ruleKey];
        int count = 0;
        for(vector<string> v: items){
            if(v[index] == ruleValue){
                count ++;
            }
        }
        return count;
    }
};
