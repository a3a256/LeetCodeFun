class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> stk;
        int i, j, k, val;
        for(i=0; i<digits.size(); i++){
            for(j=0; j<digits.size(); j++){
                for(k=0; k<digits.size(); k++){
                    if(i!=j && j!=k && i!=k){
                        val = digits[i]*100 + digits[j]*10 + digits[k];
                        if(val >= 100 && val%2 == 0){
                            stk.insert(val);
                        }
                        val = digits[i]*100 + digits[k]*10 + digits[j];
                        if(val>= 100 && val%2 == 0){
                            stk.insert(val);
                        }
                        val = digits[j]*100 + digits[i]*10 + digits[k];
                        if(val>= 100 && val%2 == 0){
                            stk.insert(val);
                        }
                        val = digits[j]*100 + digits[k]*10 + digits[i];
                        if(val>= 100 && val%2 == 0){
                            stk.insert(val);
                        }
                        val = digits[k]*100 + digits[i]*10 + digits[j];
                        if(val>= 100 && val%2 == 0){
                            stk.insert(val);
                        }
                        val = digits[k]*100 + digits[j]*10 + digits[i];
                        if(val>= 100 && val%2 == 0){
                            stk.insert(val);
                        }
                    }
                }
            }
        }
        vector<int> res;
        for(auto it: stk){
            res.push_back(it);
        }
        return res;
    }
};
