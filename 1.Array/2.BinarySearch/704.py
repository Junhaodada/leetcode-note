from typing import List


def search(nums: List[int], target: int) -> int:
    left, right = 0, len(nums)-1
    while left <= right:
        middle = (left+right)//2
        if nums[middle] < target:
            left = middle+1
        elif nums[middle] > target:
            right = middle-1
        else:
            return middle
    return -1


nums = [-1, 0, 3, 5, 9, 12]
target = 9
print(search(nums, target))
