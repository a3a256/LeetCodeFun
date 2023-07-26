class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0, end=numbers.size()-1, vsum;
        while(start<end){
            vsum = numbers[start]+numbers[end];
            if(vsum == target){
                break;
            }else if(vsum < target){
                start ++;
            }else if(vsum > target){
                end --;
            }
        }
        return {start+1, end+1};
    }
};
