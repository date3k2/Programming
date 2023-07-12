from heapq import heappush, heappop
from typing import List
from collections import defaultdict


class Graph:
    def __init__(self, n: int):
        self.graph = defaultdict(list)
        self.visited = set()
        self.n = n

    def addEdge(self, u, v):
        self.graph[u].append(v)

    def dfs(self, v):
        self.visited.add(v)
        for u in self.graph[v]:
            if u not in self.visited:
                self.dfs(u)

    def dijkstra(self, start, end):
        visited = [False] * self.n
        prob = [0] * self.n
        prob[start] = 1
        pq = [(0, start)]
        while pq:
            _, node = heappop(pq)
            if visited[node]:
                continue
            visited[node] = True
            for neighbor, p in self.graph[node]:
                if prob[node] * p > prob[neighbor]:
                    prob[neighbor] = prob[node] * p
                    heappush(pq, (-prob[neighbor], neighbor))
        return prob[end]
