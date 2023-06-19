class Solution {
public:
    int partitionString(string s) {
        int i;
        string line = "";
        line += s[0];
        int count;
        size_t found;
        count = 0;
        for(i=1; i<s.size(); i++){
            found = line.find(s[i]);
            if(found == string::npos){
                line += s[i];
            }else{
                line = s[i];
                count ++;
            }
        }
        count ++;

        return count;
    }
};
