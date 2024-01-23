class Solution {
public:
    int maxLength(vector<string>& arr) {
        int i, j, k, length;
        vector<string> r = {""};
        string line = "";
        map<char, int> mp;
        set<char> stk;
        length = 0;
        for(i=0; i<arr.size(); i++){
            for(j=0; j<r.size(); j++){
                line = r[j] + arr[i];
                for(char c: line){
                    stk.insert(c);
                }
                if(stk.size() == line.size()){
                    r.push_back(line);
                    length = max(length, (int)line.size());
                }
                stk.clear();
            }
        }
        return length;
    }
};
