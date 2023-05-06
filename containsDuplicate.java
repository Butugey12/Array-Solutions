class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> set = new HashSet<Integer>();
        int len = nums.length;
        for(int i=0;i<len;i++){
            set.add(nums[i]);
        }
        if(set.size()==len){
            return false;
        }
        return true;
    }
}
