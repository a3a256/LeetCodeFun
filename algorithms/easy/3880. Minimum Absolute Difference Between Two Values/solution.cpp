class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int i, j, distance;
        distance = -1;
        for(i=0; i<nums.size(); i++){
            for(j=0; j<nums.size(); j++){
                if(i != j && nums[i] == 1 && nums[j] == 2){
                    if(distance == -1){
                        distance = abs(i-j);
                    }else{
                        distance = min(distance, abs(i-j));
                    }
                }
            }
        }
        return distance;
    }
};
