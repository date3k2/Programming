import sys
from heapq import heappush, heappop
from collections import defaultdict

input = sys.stdin.readline
# --- Dijkstra's Algorithm ---


class Graph:
    def __init__(self, n: int):
        self.graph = defaultdict(list)
        self.n = n

    def addEdge(self, u, v, w):
        self.graph[u].append((v, w))

    def dijkstra(self, start, end):
        visited = [False] * self.n
        dist = [float("inf")] * self.n
        dist[start] = 0
        pq = [(0, start)]
        while pq:
            _, node = heappop(pq)
            if visited[node]:
                continue
            visited[node] = True
            if node == end:
                break
            for v, w in self.graph[node]:
                if dist[v] > dist[node] + w:
                    dist[v] = dist[node] + w
                    heappush(pq, (dist[v], v))
        return dist[end] if dist[end] != float("inf") else -1


if __name__ == "__main__":
    n, m = map(int, input().split())
    g = Graph(n)
    for _ in range(m):
        u, v, w = map(int, input().split())
        g.addEdge(u - 1, v - 1, w)
    s, t = map(int, input().split())
    print(g.dijkstra(s - 1, t - 1))