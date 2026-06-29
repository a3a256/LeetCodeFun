class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0, index;
        for(string s: patterns){
            index = word.find(s);
            if(index != string::npos){
                count++;
            }
        }
        return count;
    }
};
