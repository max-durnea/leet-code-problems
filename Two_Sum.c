/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdio.h>
 #include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
        int *returnPair = (int *)malloc(sizeof(int)*2); 
        for(int i = 0; i<numsSize-1 ; i++){
            for(int j = 1;j<numsSize;j++){
                if(nums[i]+nums[j]==target){
                    returnPair[0]=i;
                    returnPair[1]=j;
                    *returnSize=2;
                    return returnPair;

                }
            }
        }
        return NULL;   
}
