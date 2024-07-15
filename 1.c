#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                int* ans=(int*)malloc(sizeof(int)*2);
                *returnSize = 2;
                ans[0]=i;
                ans[1]=j;
                return ans;
            }
        }
    }
    *returnSize=0;
    return NULL;
}

int main(){
    int nums[] = {2,4,5,7,8};
    int numsSize = 5;
    int target = 6;
    int returnSize = 2;

    int* result = twoSum(nums,numsSize,target,&returnSize);
    if(result){
        printf("%d,%d",result[0],result[1]);
    }
    else{
        printf("未找到");
    }
}

