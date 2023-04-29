from typing import List


class Solution:
    def findMaxFish(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        maxFish = 0
        for i in range(m):
            for j in range(n):
                if grid[i][j] != 0:
                    maxFish = max(maxFish, self.dfs(grid, i, j))
        return maxFish

    def dfs(self, grid: List[List[int]], i: int, j: int) -> int:
        m = len(grid)
        n = len(grid[0])
        if i < 0 or i >= m or j < 0 or j >= n or grid[i][j] == 0:
            return 0
        fish = grid[i][j]
        grid[i][j] = 0
        return fish + max(self.dfs(grid, i + 1, j), self.dfs(grid, i - 1, j), self.dfs(grid, i, j + 1), self.dfs(grid, i, j - 1))


grid = [[0, 2, 1, 0], [4, 0, 0, 3], [1, 0, 0, 4], [0, 3, 2, 0]]
grid = [[1, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 1]]
print(Solution().findMaxFish(grid))  # 7
