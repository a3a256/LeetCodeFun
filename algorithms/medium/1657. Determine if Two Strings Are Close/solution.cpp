class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){
            return false;
        }
        map<char, int> w1_count;
        map<char, int> w2_count;
        priority_queue<int> q1;
        priority_queue<int> q2;
        int i;
        for(i=0; i<word1.size(); i++){
            w1_count[word1[i]]++;
            w2_count[word2[i]]++;
        }
        for(auto it: w1_count){
            if(w2_count[it.first] == 0){
                return false;
            }
            q1.push(it.second);
        }
        for(auto it: w2_count){
            if(w1_count[it.first] == 0){
                return false;
            }
            q2.push(it.second);
        }
        while(q1.size() != 0){
            if(q1.top() != q2.top()){
                return false;
            }
            q1.pop();
            q2.pop();
        }
        return true;
    }
};
