class Solution {
    public int maxOperations(int[] nums, int k) {
        int count=0;
        Map<Integer , Integer> mp = new HashMap<>();
        for(int i=0;i<nums.length;i++) {
            int compliment = k-nums[i];
            if(mp.containsKey(compliment) && mp.get(compliment) >0) {
                count++;
                mp.put(compliment , mp.get(compliment)-1);
            }
            else {
                mp.put(nums[i] , mp.getOrDefault(nums[i] , 0)+1);
            }
        }
        return count;
    }
}
