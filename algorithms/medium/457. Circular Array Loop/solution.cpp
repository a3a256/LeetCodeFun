class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int fast, slow, i = 0, j, temp;
        for(i=0; i<nums.size(); i++){
            slow = i;
            fast = next_index(nums, i);
            while(nums[slow]*nums[fast] > 0 && nums[slow] * nums[next_index(nums, fast)] > 0){
                if(slow == fast){
                    if(slow == next_index(nums, slow)){
                        break;
                    }
                    return true;
                }
                slow = next_index(nums, slow);
                fast = next_index(nums, next_index(nums, fast));
            }
            j = i;
            while(nums[j] * nums[next_index(nums, j)] > 0){
                temp = j;
                j = next_index(nums, j);
                nums[temp] = 0;
            }
        }

        return false;
    }

private:

    int next_index(vector<int>& nums, int i){
        int n = nums.size();
        return ((i + nums[i])%n + n)%n;
    }
};
