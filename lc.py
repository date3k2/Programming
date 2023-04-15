# Solving problem 2218 on LeetCode

import functools
from typing import List
class Solution:
    @functools.lru_cache(None)
    def maxValueOfCoins(self, piles: List[List[int]], k: int) -> int:
        dp = [[0] * (k + 1) for _ in range(len(piles) + 1)]
        for i in range(1, 2):
            for u in range(1,len(piles[i - 1])+1):
                for j in range(1, k + 1):
                    if j >= u:
                        dp[i][j] = max(dp[i][j], dp[i-1][j-u] + sum(piles[i-1][:u]))
                    else:
                        dp[i][j] = dp[i-1][j]
                break
                         
        return dp
x = Solution()
piles = [[1,100,3]]
k = 2
print(x.maxValueOfCoins(piles, k))