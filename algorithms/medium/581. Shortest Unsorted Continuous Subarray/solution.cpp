class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> back = nums;
        sort(back.begin(), back.end());
        int i = 0;
        for(i=0; i<back.size(); i++){
            if(back[i] != nums[i]){
                break;
            }
        }
        if(i == back.size()){return 0;}
        int j;
        for(j=back.size()-1; j>-1; j--){
            if(back[j] != nums[j]){
                break;
            }
        }
        return j-i+1;
    }
};
