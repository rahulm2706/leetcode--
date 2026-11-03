class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        set1 = set()
        for n in nums:
            if n in set1:
                return True
            else:
                set1.add(n)
        return False