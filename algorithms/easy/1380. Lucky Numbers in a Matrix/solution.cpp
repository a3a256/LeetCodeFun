class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> lucky;
        map<int, int> minimum, maximum;
        int value, i, j;

        for(i=0; i<matrix.size(); i++){
            minimum[*min_element(matrix[i].begin(), matrix[i].end())] = 1;
        }

        for(i=0; i<matrix[0].size(); i++){
            value = INT_MIN;
            for(j=0; j<matrix.size(); j++){
                value = max(matrix[j][i], value);
            }
            maximum[value] = 1;
        }

        for(auto it: minimum){
            if(maximum[it.first] == 1){
                lucky.push_back(it.first);
            }
        }

        return lucky;
    }
};
