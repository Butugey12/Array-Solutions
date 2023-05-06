class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length==0) return 0;
        Set < Integer > set = new HashSet < Integer > ();
        for (int num: nums) {
            set.add(num);
        }
        int longest= 1;
        int n = set.size();
        for(int num: set) {
            // so in our set we have {102,4,100,1,101,3,2,1,1}
            //so if we look at 102 , we check if inside of the set there is an element smaller
            // if there is then thats what we are looking for , so when we find the element 
            // that is the smallest , like 100 ,since there is no 99 , we know that it is the 
            //start , so we ask if the set does not contain 99 i.e set[i]-1 , then we 
            // want to now go and set out count to 1 and then do a while loop as long
            // as there is an element that is consecutive to our current element 
            
            int currentElement = num;
            if(!set.contains(currentElement-1)) {
                int count =1;
                int k =1;
                while(set.contains(currentElement+k)) {
                    count++;
                    k++;
                }
                longest = Math.max(longest, count);
            }

        }
        return longest;
    }
}
