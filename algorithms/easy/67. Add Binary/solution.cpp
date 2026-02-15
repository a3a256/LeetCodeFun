class Solution {
public:
    string addBinary(string a, string b) {
        int a_end = a.size()-1;
        int b_end = b.size()-1;
        int i=0, end;
        end = max((int)a.size(), (int)b.size());
        string res = "";
        char one, two, rem = '0';
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        while(i<end){
            if(i<a.size()){
                one = a[i];
            }else{one = '0';}
            if(i<b.size()){
                two = b[i];
            }else{two = '0';}
            if(one == '1' && two == '1'){
                if(rem == '1'){res += '1';}
                else{res += '0';}
                rem = '1';
            }else if(one == '1' || two == '1'){
                if(rem == '1'){res += '0';}
                else{res += '1';}
            }else{
                if(rem == '1'){res += '1';}
                else{res += '0';}
                rem = '0';
            }
            i++;
        }
        if(rem == '1'){res += '1';}
        reverse(res.begin(), res.end());
        return res;
    }
};
