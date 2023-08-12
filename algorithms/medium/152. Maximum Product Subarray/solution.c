#define MAX(x, y) (((x) > (y)) ? (x) : (y))
int maxProduct(int* nums, int numsSize){
    int i, deep, cur;
    deep = INT_MIN;
    cur = 1;
    for(i=0; i<numsSize; i++){
        cur *= nums[i];
        deep = MAX(cur, deep);
        if(cur == 0){
            cur = 1;
        }
    }
    cur = 1;
    for(i=numsSize-1; i>-1; i--){
        cur *= nums[i];
        deep = MAX(cur, deep);
        if(cur == 0){
            cur = 1;
        }
    }
    return deep;
}
