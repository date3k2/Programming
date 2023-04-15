from typing import List,Optional
import heapq
# class Solution:
#     def findColumnWidth(self, grid: List[List[int]]) -> List[int]:
#         return [max(map(len, map(str, row))) for row in zip(*grid)]
# x= Solution()
# grid = [[1],[22],[333]]
# print(x.findColumnWidth(grid))

# class Solution1:
#     def findPrefixScore(self, nums: List[int]) -> List[int]:
#         lps =[]
#         conver =0
#         maxs = nums[0]
#         for num in nums:
#             maxs = max(maxs, num)
#             conver = conver + num + maxs
#             lps.append(conver)
#         return lps
# x = Solution1()
# nums =[1,1,2,4,8,16]
# print(x.findPrefixScore(nums))


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
# class Solution:
#     def replaceValueInTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
#         if not root:
#             return
        
#Dijkstra Algorithm in directed graph with weights
class Graph:

    def __init__(self, n: int, edges: List[List[int]]):
        self.n = n
        self.edges = edges
        self.dist = [float('inf')] * n
        

    def addEdge(self, edge: List[int]) -> None:
        self.edges.append(edge)

    def dijkstra(self, src: int) -> None:
        self.dist[src] = 0
        pq = []
        heapq.heappush(pq, [0, src])
        while pq:
            d, u = heapq.heappop(pq)
            if self.dist[u] < d:
                continue
            for v, w in self.edges:
                if u == v:
                    continue
                if self.dist[v] > self.dist[u] + w:
                    self.dist[v] = self.dist[u] + w
                    heapq.heappush(pq, [self.dist[v], v])

    def shortestPath(self, node1: int, node2: int) -> int:
        self.dist[node1] = 0
        self.bellmanFord(node1)
        return self.dist[node2] if self.dist[node2] != float('inf') else -1
x= Graph(4, [[0, 2, 5], [0, 1, 2], [1, 2, 1], [3, 0, 3]])

print(x.shortestPath(3,2))

# 