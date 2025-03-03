class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n=list(set(nums))
        return len(n)!=len(nums)
        