class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res(boxes.size(), 0);
        vector<int> pos;
        int i, j;
        for(i=0; i<boxes.size(); i++){
            if(boxes[i] == '1'){
                pos.push_back(i);
            }
        }

        for(i=0; i<res.size(); i++){
            for(j=0; j<pos.size(); j++){
                res[i] += abs(i-pos[j]);
            }
        }

        return res;
    }
};
