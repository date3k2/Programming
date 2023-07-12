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
                self.dfs(u)

