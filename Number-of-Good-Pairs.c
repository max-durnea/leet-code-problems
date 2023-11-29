/*
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.
*/
int numIdenticalPairs(int* nums, int numsSize) {
    int goodPairs=0;
    for(int i = 0;i<numsSize;i++){
        for(int j = i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                goodPairs+=1;
            }
        }
    }
    return goodPairs;
}
