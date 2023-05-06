class Solution {
    public boolean isSubsequence(String s, String t) {
        if(s.length()==0)
            return true;
        char[] S = s.toCharArray();
        char[] T = t.toCharArray();
        int j=0;
        for(int i=0 ; i<T.length && j<s.length(); i++) {
            if(S[j]==T[i] ){
                j++;
                
            }
        }
        if (j == s.length())
            return true;
        return false;
    }
}
