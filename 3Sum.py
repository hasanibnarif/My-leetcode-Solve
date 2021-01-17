class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        ret = []
        
        for i in range(0,len(nums)):
            lo = i+1
            hi = len(nums)-1
            
            # duplicate check
            if (i>0) and nums[i]==nums[i-1] :
                continue
            
            while (lo<hi) :
                if (hi<len(nums)-1) and nums[hi]==nums[hi+1] :
                    hi = hi-1
                    continue
                
                if (nums[i]+nums[hi]+nums[lo] > 0) :
                    hi = hi-1
                elif (nums[i]+nums[hi]+nums[lo] < 0) :
                    lo = lo+1
                else :
                    ret.append([nums[i],nums[hi],nums[lo]])
                    hi = hi-1
                    lo = lo+1
        return retclass Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        ret = []
        
        for i in range(0,len(nums)):
            lo = i+1
            hi = len(nums)-1
            
            # duplicate check
            if (i>0) and nums[i]==nums[i-1] :
                continue
            
            while (lo<hi) :
                if (hi<len(nums)-1) and nums[hi]==nums[hi+1] :
                    hi = hi-1
                    continue
                
                if (nums[i]+nums[hi]+nums[lo] > 0) :
                    hi = hi-1
                elif (nums[i]+nums[hi]+nums[lo] < 0) :
                    lo = lo+1
                else :
                    ret.append([nums[i],nums[hi],nums[lo]])
                    hi = hi-1
                    lo = lo+1
        return ret