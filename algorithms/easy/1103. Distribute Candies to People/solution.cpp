class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people, 0);
        int i, add;
        add = 1;
        while(candies > 0){
            for(i=0; i<num_people; i++){
                if(candies >= add){
                    res[i] += add;
                    candies -= add;
                    add++;
                }else{
                    res[i] += candies;
                    candies = 0;
                }
            }
        }
        return res;
    }
};
