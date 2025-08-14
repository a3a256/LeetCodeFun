class Solution {
public:
    string largestGoodInteger(string num) {
        string res, temp;
        res = "";
        int i;
        for(i=2; i<num.size(); i++){
            if(num[i] == num[i-1] && num[i-1] == num[i-2]){
                temp = num[i];
                temp += num[i-1];
                temp += num[i-2];
                res = max(temp, res);
            }
        }
        return res;
    }
};
