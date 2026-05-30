class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singles = 0, doubles = 0;
        for(int i: nums){
            if(i>9){singles += i;}else{doubles+=i;}
        }
        return singles != doubles;
    }
};
