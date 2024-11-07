class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int arr[24];
        string bits;
        int i, j;
        for(i=0; i<candidates.size(); i++){
            bits = bitset<24>(candidates[i]).to_string();
            for(j=0; j<bits.size(); j++){
                if(bits[j] == '1'){
                    arr[j]++;
                }
            }
        }
        int top = 0;
        for(int k: arr){
            top = max(k, top);
        }
        return top;
    }
};
