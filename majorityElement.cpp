class Solution {
    public int majorityElement(int[] nums) {
        int output=0;
        int m = nums.length/2;
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i:nums){
            map.put(i,map.getOrDefault(i,0)+1);
        }
        for(Integer a : map.keySet()){
            if(map.get(a)>m){
                output = a;
            }
        }
        return output;
    }
}
