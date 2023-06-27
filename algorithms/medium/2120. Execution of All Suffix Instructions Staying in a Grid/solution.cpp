class Solution {
public:
    int isPossible(int n, vector<int>& startPos, string s){
        int y = startPos[0];
        int x = startPos[1];
        int length = s.size();
        int count = 0;
        int i;
        for(i=0; i<length; i++){
            if(s[i] == 'R'){
                x ++;
            }else if(s[i] == 'L'){
                x --;
            }else if(s[i] == 'D'){
                y ++;
            }else if(s[i] == 'U'){
                y --;
            }

            if((x >= n || x < 0) || (y >= n || y < 0)){
                break;
            }else{
                count ++;
            }
        }

        return count;
    }
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        string val = "";
        int i, j, length;
        vector<int> res;
        length = s.size();
        int l = length;
        for(i=0; i<length; i++){
            val = s.substr(i, l);
            res.push_back(isPossible(n, startPos, val));
        }

        return res;
    }
};
