#include <stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i=0;i<numsSize-1;i++){
        for(int j=i;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                returnSize[0]=i;
                returnSize[1]=j;
            }
        }
    }
    return returnSize;
}
int main(){
    int nums[4] = {2, 7, 11, 15}, target = 9;
    int returnSize[2];
    twoSum(nums,4,target,returnSize);
    printf("%d %d",returnSize[0],returnSize[1]);
    return 0;
}

