from typing import List


class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        """python实现
        快指针指向下一位置元素
        慢指针指向当前位置元素
        """
        slowIndex = fastIndex = 0
        while fastIndex < len(nums):
            if nums[fastIndex] != val:
                nums[slowIndex] = nums[fastIndex]
                slowIndex += 1
            fastIndex += 1
        return slowIndex
