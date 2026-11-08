class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0, rev1 = 0, rev2 = 0;
        version1 += '.';
        version2 += '.';
        while(i < version1.size() || j < version2.size()){
            if(i < version1.size() && j < version2.size()){
                if(version1[i] == '.' && version2[j] == '.'){
                    if(rev1 > rev2){return 1;}else if(rev1 < rev2){return -1;}
                    rev1 = 0;
                    rev2 = 0;
                    i++;
                    j++;
                }else if(version1[i] == '.'){
                    rev2 *= 10;
                    rev2 += version2[j] - '0';
                    j++;
                }else if(version2[j] == '.'){
                    rev1 *= 10;
                    rev1 += version1[i] - '0';
                    i++;
                }else{
                    rev1 *= 10;
                    rev1 += version1[i] - '0';
                    rev2 *= 10;
                    rev2 += version2[j] - '0';
                    i++;
                    j++;
                }
            }else if(i < version1.size()){
                if(version1[i] == '.'){
                    if(rev1 != rev2){
                        return (rev1 < rev2)? -1: 1;
                    }
                    rev1 = 0;
                }else{
                    rev1 *= 10;
                    rev1 += version1[i] - '0';
                }
                i++;
            }else if(j < version2.size()){
                if(version2[j] == '.'){
                    if(rev1 != rev2){
                        return (rev1 < rev2)? -1: 1;
                    }
                    rev1 = 0;
                }else{
                    rev2 *= 10;
                    rev2 += version2[j] - '0';
                }
                j++;
            }
        }
        return 0;
    }
};
