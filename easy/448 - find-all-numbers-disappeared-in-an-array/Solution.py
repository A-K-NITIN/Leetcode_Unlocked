class Solution(object):
    def findDisappearedNumbers(self, n):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        s=[]
        for i in range(1,len(n)+1):
            if i not in n :
                s.append(i)
        return s