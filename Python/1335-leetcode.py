from typing import List
from functools import cache


class Solution:
    def minDifficulty(self, jobDifficulty: List[int], d: int) -> int:
        n = len(jobDifficulty)

        @cache
        def solve(i, days):
            if days == 1:
                return max(jobDifficulty[i : n + 1])
            ans = float("inf")
            for j in range(i + 1, n - days + 2):
                ans = min(ans, max(jobDifficulty[i:j], default=0) + solve(j, days - 1))
            return ans

        return solve(0, d) if n >= d else -1


# jobDifficulty = [187, 749, 953, 160, 150, 538, 923, 353, 490, 177]
jobDifficulty = [6, 5, 4, 3, 2, 1]
d = 3
Solution().minDifficulty(jobDifficulty, d)
