class Solution {
public:

    int nextGreaterElement(int n) {
        vector<int> d;
        int k = n;
        while(k>0){
            d.push_back(k%10);
            k /= 10;
        }
        int i = 1;
        while(i < d.size()){
            if(d[i] < d[i-1]){
                break;
            }
            i++;
        }

        if(i == d.size()){
            return -1;
        }

        int j = 0;
        while(j<i){
            if(d[j] > d[i]){
                break;
            }
            j++;
        }

        swap(d[j], d[i]);


        reverse(d.begin(), d.begin()+i);

        long res = 0;
        while(!d.empty()){
            res *= 10;
            res += d.back();
            d.pop_back();
        }

        return (res > INT_MAX)? -1: res;
    }
};
