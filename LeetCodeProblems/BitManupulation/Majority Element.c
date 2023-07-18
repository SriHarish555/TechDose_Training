int majorityElement(int* nums, int numsSize){
    int maj=nums[0],count=1;
    for(int i=1;i<numsSize;i++)
    {
        if(maj==nums[i])
        {
            count++;
        }
        else
        {
            count--;
            if(count==0)
            {
                maj=nums[i];
                count++;
            }
        }
    }
    return maj;
}