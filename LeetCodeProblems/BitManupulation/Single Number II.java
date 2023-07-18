class Solution {
    public int singleNumber(int[] nums) {
        int o=0,t=0;
        for(int i=0;i<nums.length;i++)
        {
            // System.out.print(o^nums[i]);
            o=(o^nums[i])&(~t);            
            t=(t^nums[i])&(~o);
            System.out.println(o+" "+t);
        }
        return o;        
    }
}