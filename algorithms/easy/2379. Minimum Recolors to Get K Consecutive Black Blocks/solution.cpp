class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i, b, top_num;
        b = 0;
        top_num = 0;
        for(i=0; i<k; i++){
            if(blocks[i] == 'B'){
                b++;
            }
        }
        top_num = b;
        for(i=k; i<blocks.size(); i++){
            if(blocks[i-k] == 'B'){
                b--;
            }
            if(blocks[i] == 'B'){
                b++;
            }
            top_num = max(top_num, b);
        }
        return k - top_num;
    }
};
