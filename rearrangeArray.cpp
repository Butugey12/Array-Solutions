class Solution {
    public int[] rearrangeArray(int[] nums) {
        List<Integer> positives = new ArrayList<>();
        List<Integer> negatives = new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]>=0){
                positives.add(nums[i]);
            }
            if(nums[i]<0){
                negatives.add(nums[i]);
            }
        }
        
        // now we have positves:[3,1,2] abd negatives being :[-2,-5,-4]
       //the 0th element is positive and the 1th element is negative
        int[] result = new int[nums.length];
        int j=0;
        for(int i=0;i<nums.length;i+=2){
            result[i] = positives.get(j);
            result[i+1] = negatives.get(j);
            j++;
        }
        return result;
        
    }
}
