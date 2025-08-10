class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<string> v;
        int i;
        string num;
        for(i=0; i<=30; i++){
            num = to_string((int)pow(2, i));
            sort(num.begin(), num.end());
            v.push_back(num);
        }
        num = to_string(n);
        sort(num.begin(), num.end());
        for(i=0; i<v.size(); i++){
            if(num == v[i]){
                return true;
            }
        }
        return false;
    }
};
