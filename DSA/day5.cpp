/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *sum = malloc(numsSize*sizeof(int));
     int ptr1 = 0;
     int ptr2 = numsSize - 1;
     int i = 1;
     int j = numsSize - 2;
     int lsum[numsSize];
     lsum[0] = 0;
     int rsum[numsSize];
     rsum[ptr2] = 0;
     for(int x=1;x<numsSize;x++){
        lsum[i] = lsum[i-1]+nums[ptr1];
        i++;
        ptr1++;
        rsum[j] = rsum[j+1]+nums[ptr2];
        j--;
        ptr2--;
     }
     
    
    for(int x = 0;x<numsSize;x++){
        sum[x] = abs(lsum[x]-rsum[x]);
    }
    *returnSize = numsSize;
    return sum;
}