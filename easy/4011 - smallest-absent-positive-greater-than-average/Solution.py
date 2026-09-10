class Solution(object):
    def smallestAbsent(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        a=(sum(nums))/len(nums)
        m=max(nums)
        if m<0:
            return 1
        for i in range(int(a)+1,m+2):
            if(i not in nums and i>0): return i
        return 0
        