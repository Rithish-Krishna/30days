int findMiddleIndex(int* nums, int numsSize) {
    //finding right sum
    int *rs = malloc(sizeof(int) * numsSize);
    rs[numsSize-1] = 0;
    int ptr = numsSize-1;
    for(int i=numsSize-2;i>=0;i--){
        rs[i] = rs[i+1]+nums[ptr];
        ptr--;
    }

    int sum = 0;
    //comapre rs and array sum;
    for(int i=0;i<numsSize;i++){
        if(sum==rs[i]){
            return i;
        }
        sum+=nums[i];
    }
    return -1;
}