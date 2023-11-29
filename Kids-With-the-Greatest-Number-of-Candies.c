/**
There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdlib.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool *result=(bool *)malloc(sizeof(bool)*candiesSize);
    //Find the greates number of candies when none of the kids have gotten extra candies
    int greatest=candies[0];
    for(int i=1;i<candiesSize;i++){
        if(candies[i]>greatest){
            greatest=candies[i];
        }
    }
    for(int i = 0; i<candiesSize;i++){
        if(candies[i]+extraCandies>=greatest){
            result[i]=true;
        }
        else{
            result[i]=false;
        }
    }
    *returnSize=candiesSize;
    return result;

}
