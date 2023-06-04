from collections import defaultdict
from typing import List

# Directed graph, detect cycle


class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
        self.state = defaultdict(int)

    def addEdge(self, u, v):
        self.graph[u].append(v)

    # A function used by DFS
    def DFS(self, v):
        self.state[v] = 1
        for neighbour in self.graph[v]:
            if self.state[neighbour] == 1:
                return -1
            if self.state[neighbour] == 0:
                self.DFS(neighbour)
        self.state[v] = 2


# Undirected graph


class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
        self.visited = set()

    def addEdge(self, u, v):
        self.graph[u].append(v)

    def dfs(self, v):
        self.visited.add(v)
        for u in self.graph[v]:
            if u not in self.visited:
                self.DFS(u)


# class Solution:
#     def numSimilarGroups(self, strs: List[str]) -> int:
#         def similar(a, b):
#             d = 0
#             for i in range(len(a)):
#                 if d > 2:
#                     return False
#                 elif a[i] != b[i]:
#                     d += 1
#             return d in [0, 2]
#         if len(strs) == 1:
#             return 1
#         groups = 0
#         g = Graph()
#         for i in range(len(strs)-1):
#             for j in range(i+1, len(strs)):
#                 if similar(strs[i], strs[j]):
#                     g.addEdge(i, j)
#                     g.addEdge(j, i)
#         for i in range(len(strs)):
#             if i not in g.visited:
#                 g.DFS(i)
#                 groups += 1
#         return groups
