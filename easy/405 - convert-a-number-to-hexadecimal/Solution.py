class Solution(object):
    def toHex(self, n):
        """
        :type num: int
        :rtype: str
        """
        n= hex(n&0xffffffff)
        return n[2:]
        