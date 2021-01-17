class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        n = len(s)
        
        i = 0
        j = 0
        
        mp = {}
        ret = 0
        
        while j<n :
            
            if s[j] in mp :
                i = max(mp[s[j]],i)
                
            
            mp[ s[j] ] = j+1
            ret = max(ret,j-i+1)
            j = j+1
            
        
        return ret