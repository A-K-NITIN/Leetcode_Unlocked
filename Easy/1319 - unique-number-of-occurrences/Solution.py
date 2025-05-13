class Solution(object):
    def uniqueOccurrences(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        b=list(map(abs,arr))
       
        a=list(set(b))
        print(a)
        return not a==b
        