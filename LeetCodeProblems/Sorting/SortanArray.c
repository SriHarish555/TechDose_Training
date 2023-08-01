/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArray(int* nums, int numsSize, int* returnSize){

    for (int i=0;i<numsSize;i++)
    {
        for (int z=i+1;z<numsSize;z++)
        {
            if (nums[i]>nums[z])
            {
                int t=nums[i];
                nums[i]=nums[z];
                nums[z]=t;
            }
        }
    }
    *returnSize=numsSize;
    return nums;

}