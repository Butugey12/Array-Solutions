class Solution {
    public int[] getConcatenation(int[] nums) {
       // int[] ans = new ans[2*nums.length];
        int[] result = new  int[2*nums.length];

        for (int i = 0; i < nums.length; i++) {
            result[i] = nums[i];
        }
        int count=0;
        for(int i= nums.length;i<2*nums.length;i++){
            result[i] = nums[count++];
        }
        return result;
        
    }
}
