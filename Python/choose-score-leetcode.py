from typing import List
from functools import cache


class Solution:
    def PredictTheWinner(self, nums: List[int]) -> bool:
        @cache
        def maxDiff(left, right):
            if left == right:
                return nums[left]
            scoreLeft = nums[left] - maxDiff(left + 1, right)
            scoreRight = nums[right] - maxDiff(left, right - 1)
            return max(scoreLeft, scoreRight)

        return maxDiff(0, len(nums) - 1) >= 0


Solution().PredictTheWinner([5, 1, 2, 5, 1, 25])
