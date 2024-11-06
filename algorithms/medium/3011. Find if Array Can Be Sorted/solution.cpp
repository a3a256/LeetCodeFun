class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        if(nums.size() < 2){
            return true;
        }
        int i, temp, one_bits, two_bits;
        string one = "";
        string two = "";
        bool sorted = false;
        while(!sorted){
            sorted = true;
            for(i=1; i<nums.size(); i++){
                if(nums[i] < nums[i-1]){
                    one = bitset<16>(nums[i-1]).to_string();
                    two = bitset<16>(nums[i]).to_string();
                    one_bits = 0;
                    two_bits = 0;
                    for(char c: one){
                        if(c == '1'){
                            one_bits++;
                        }
                    }
                    for(char c: two){
                        if(c == '1'){
                            two_bits++;
                        }
                    }
                    if(one_bits == two_bits){
                        temp = nums[i];
                        nums[i] = nums[i-1];
                        nums[i-1] = temp;
                        sorted = false;
                    }
                }
            }
        }
        
        for(i=1; i<nums.size(); i++){
            if(nums[i] < nums[i-1]){
                return false;
            }
        }
        return true;
    }
};
