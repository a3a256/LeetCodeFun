class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count, i, j;
        vector<int> res;
        for(i=0; i<bank.size(); i++){
            count = 0;
            for(j=0; j<bank[i].size(); j++){
                if(bank[i][j] == '1'){
                    count ++;
                }
            }
            if(count > 0){
                res.push_back(count);
            }
        }

        int vsum = 0;
        for(i=1; i<res.size(); i++){
            vsum += res[i]*res[i-1];
        }

        return vsum;
    }
};
