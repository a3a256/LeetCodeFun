class Solution {
public:
    struct less_than_key{
        inline bool operator() (const vector<int> one, const vector<int> two){
            if(one[0] == two[0]){
                return one[1] < two[1];
            }
            return one[0] > two[0];
        }
    };
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> res;
        sort(people.begin(), people.end(), less_than_key());
        for(vector<int> arr: people){
            res.insert(res.begin()+arr[1], arr);
        }
        return res;
    }
};
