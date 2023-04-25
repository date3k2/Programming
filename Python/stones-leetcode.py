from heapq import heappush, heappop
from typing import List
class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        heap = []
        for stone in stones:
            heappush(heap, -stone)
        while len(heap) > 1:
            y = heappop(heap)
            x = heappop(heap)
            if x != y:
                heappush(heap, y - x)
        return -heap[0] if heap else 0
x = Solution()
print(x.lastStoneWeight([2,7,4,1,8,1]))
