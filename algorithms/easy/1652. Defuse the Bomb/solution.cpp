class Solution {
public:
    int forward(vector<int> &c, int pos, int k){
        int diff = c.size() - (pos+1);
        if(diff >= k){
            return accumulate(c.begin()+pos+1, c.begin()+pos+1+k, 0);
        }

        return accumulate(c.begin()+pos+1, c.end(), 0) + accumulate(c.begin(), c.begin()+(k-diff), 0);
    }

    int backward(vector<int> &c, int pos, int k){
        if(pos == 0){
            return accumulate(c.end()-k, c.end(), 0);
        }
        if(pos>=k){
            return accumulate(c.begin()+(pos-k), c.begin()+pos, 0);
        }
        return accumulate(c.begin(), c.begin()+pos, 0) + accumulate(c.end()-(k-pos), c.end(), 0);
    }
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> v(code.size(), 0);
        if(k == 0){
            return v;
        }
        int i, diff;
        for(i=0; i<code.size(); i++){
            if(k>0){
                v[i] = forward(code, i, k);
            }else{
                v[i] = backward(code, i, abs(k));
            }
        }
        return v;
    }
};
