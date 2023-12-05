/*Given a 0-indexed integer array nums of length n and an integer target, return the number of pairs (i, j) where 0 <= i < j < n and nums[i] + nums[j] < target.
  */
int countPairs(int* nums, int numsSize, int target){
    int result = 0;
    for(int i = 0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]<target){
                ++result;
            }
        }
    }
    return result;
}
