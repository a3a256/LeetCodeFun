class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        string binary = bitset<32>(n).to_string();
        vector<int> v, res;
        long long i, j, index, val;
        index = 0;
        for(i=31; i>-1; i--){
            if(binary[i] == '1'){
                v.push_back((int)pow(2, index));
            }
            index++;
        }
        for(i=0; i<queries.size(); i++){
            val = 1;
            for(j=queries[i][0]; j<queries[i][1]+1; j++){
                val *= v[j];
                val = val%1000000007;
            }
            res.push_back(val);
        }
        return res;
    }
};
