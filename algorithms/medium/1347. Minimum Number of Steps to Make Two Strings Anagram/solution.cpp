class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> s_count;
        map<char, int> t_count;
        int i;
        for(i=0; i<s.size(); i++){
            s_count[s[i]] ++;
            t_count[t[i]] ++;
        }

        for(auto it: t_count){
            if(s_count.find(it.first) != s_count.end()){
                if(s_count[it.first]>=it.second){
                    t_count[it.first] = 0;
                }else{
                    t_count[it.first] -= s_count[it.first];
                }
            }
        }

        int count = 0;
        for(auto it: t_count){
            count += it.second;
        }

        return count;
    }
};
