class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int size = candyType.size();
        set<int> stk;
        int i;
        for(i=0; i<size; i++){
            stk.insert(candyType[i]);
        }
        size = size/2;
        if(size>stk.size()){
            return (int)stk.size();
        }
        return size;
    }
};
