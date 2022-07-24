from typing import List


class Solution:
    def minSubArrayLen(self, s: int, nums: List[int]) -> int:
        res = float("inf")
        Sum = 0
        index = 0
        for i in range(len(nums)):
            Sum += nums[i]
            while Sum >= s:
                res = min(res, (i-index+1))
                Sum -= nums[index]
                index += 1
            return res if res != float("inf") else 0
