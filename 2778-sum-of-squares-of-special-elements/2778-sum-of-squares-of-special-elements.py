class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        n = len(nums)
        prod = 0
        for i in range(n):
            if n%(i+1)==0:
                prod += nums[i]**2
        return prod