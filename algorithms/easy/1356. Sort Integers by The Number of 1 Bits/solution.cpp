class Solution {
public:
    struct compare{
        inline bool operator() (int a, int b){
            string one = bitset<64>(a).to_string();
            string two = bitset<64>(b).to_string();
            int i, j;
            i = 0;
            j = 0;
            for(char c: one){
                if(c == '1'){
                    i++;
                }
            }
            for(char c: two){
                if(c == '1'){
                    j++;
                }
            }
            if(i == j){
                return a<b;
            }
            return i<j;
        }
    };
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare());
        return arr;
    }
};
