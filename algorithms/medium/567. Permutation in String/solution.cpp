class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }
        map<char, int> one, two;
        for(char c: s1){
            one[c]++;
        }
        string s = "";
        int i;
        for(i=0; i<s1.size(); i++){
            s += s2[i];
            two[s2[i]]++;
        }
        bool match;
        for(i=s1.size(); i<s2.size(); i++){
            match = true;
            for(auto it: two){
                if(one[it.first] != it.second){
                    match = false;
                }
            }
            if(match){
                return true;
            }
            two[s2[i-s1.size()]]--;
            two[s2[i]]++;
        }
        match = true;
        for(auto it: two){
           if(one[it.first] != it.second){
                match = false;
            }
        }
        return match;
    }
};
