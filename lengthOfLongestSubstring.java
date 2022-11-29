class Solution {
    public int lengthOfLongestSubstring(String s) {
        int aPointer=0;
        int bPointer=0;
        int max=0;
        HashSet<Character> hashset = new HashSet();
        
        while (bPointer<s.length()){
         if(!hashset.contains(s.charAt(bPointer))){
             hashset.add(s.charAt(bPointer));
             bPointer++;
             max =Math.max(hashset.size(),max);
         } else {
                hashset.remove(s.charAt(aPointer));
                aPointer++;
            }
        }
        return max;
    }
}
