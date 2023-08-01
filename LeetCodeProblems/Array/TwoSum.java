class Solution {
    public int[] twoSum(int[] nums, int target) {

        int []arr=new int[2];
        int len=nums.length;
        for(int i=0;i<len;i++)
        {
            for(int z=i+1;z<len;z++)
            {
                if(nums[i]+nums[z]==target)
                {
                    arr[0]=i;
                    arr[1]=z;
                    return arr;
                }
            }
        }  
        return arr;      
    }
}