class Solution {
    public int[] rearrangeArray(int[] nums) {
        int post = 0;
        int n = nums.length;
        int neg = 1;
        int[] arry = new int[n];
        for (int i= 0 ; i<n; i++){
            if(nums[i]>0){
                arry[post] = nums[i];
                 post += 2;
            }
            else{
                arry[neg] = nums[i];
                 neg += 2;
            }
        }
        return arry;
        
    }
}