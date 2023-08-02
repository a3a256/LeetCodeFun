class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size() == 1){
            return {nums};
        }
        int last = nums.back();
        nums.pop_back();
        vector<vector<int>> res;
        vector<int> temp;
        for(vector<int> p: permute(nums)){
            for(int i=0; i<p.size()+1; i++){
                temp.insert(temp.end(), p.begin(), p.begin()+i);
                temp.push_back(last);
                temp.insert(temp.end(), p.begin()+i, p.end());
                res.push_back(temp);
                vector<int>().swap(temp);
            }
        }
        return res;
    }
};
