class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l ,r,i=0;
        map<char, int> mp;
        int curLength=0;
        int result=0;
        while(i<n){
            mp[s[i]]++;
            curLength++;
            while(mp[s[i]] >1) {
                mp[s[l]]--;
                l++;
                curLength--;
            }
            r++;
            i++;
            result = max(result , curLength);
        }
        return result;
        
    }
};
