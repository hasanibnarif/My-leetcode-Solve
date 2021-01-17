class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        ii = -1
        prev = -99999
        for n in nums:
            if n != prev:
                ii = ii+1
                nums[ii] = n   
                prev = n

            
                
                
        
        return (ii+1)