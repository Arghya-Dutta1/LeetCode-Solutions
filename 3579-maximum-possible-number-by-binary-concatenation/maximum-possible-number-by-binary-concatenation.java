class Solution {
    public int maxGoodNumber(int[] nums) {
        String c1=Integer.toBinaryString(nums[0])+Integer.toBinaryString(nums[1])+Integer.toBinaryString(nums[2]);
        String c2=Integer.toBinaryString(nums[0])+Integer.toBinaryString(nums[2])+Integer.toBinaryString(nums[1]);
        String c3=Integer.toBinaryString(nums[1])+Integer.toBinaryString(nums[0])+Integer.toBinaryString(nums[2]);
        String c4=Integer.toBinaryString(nums[1])+Integer.toBinaryString(nums[2])+Integer.toBinaryString(nums[0]);
        String c5=Integer.toBinaryString(nums[2])+Integer.toBinaryString(nums[1])+Integer.toBinaryString(nums[0]);
        String c6=Integer.toBinaryString(nums[2])+Integer.toBinaryString(nums[0])+Integer.toBinaryString(nums[1]);
        String ans[]={c1, c2, c3, c4, c5, c6};
        int max=0;
        for(String i:ans){
            int a=Integer.parseInt(i, 2);
            max=Math.max(a, max);
        }
        return max;
    }
}