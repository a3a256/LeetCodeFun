class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> res(ratings.size(), 1);
        vector<int> left(ratings.size(), 1);
        int i, coef = 1;
        for(i=1; i<ratings.size(); i++){
            if(ratings[i] > ratings[i-1]){
                res[i] = res[i-1]+1;
            }
        }
        for(i=ratings.size()-2; i>-1; i--){
            if(ratings[i] > ratings[i+1]){
                left[i] = left[i+1]+1;
            }
        }
        for(i=0; i<res.size(); i++){
            res[i] = max(left[i], res[i]);
        }
        return accumulate(res.begin(), res.end(), 0);
    }
};
