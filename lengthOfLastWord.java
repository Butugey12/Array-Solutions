class Solution {
    public int lengthOfLastWord(String s) {
        int len = s.length();
        String[] arr = s.split(" ");
        String lastWord = arr[arr.length-1];
        return lastWord.length();
    }

        
}
