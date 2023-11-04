import sys
from collections import defaultdict, deque

# sys.stdin = open("input.txt", "r")
# sys.stdout = open("output.txt", "w")
input = sys.stdin.readline
# --- Maximum Flow in a Graph ---


class Graph:
    def __init__(self, n: int):
        self.n = n
        self.parent = [-1] * n
        self.edge = defaultdict(int)

    def addEdge(self, u, v, capacity):
        self.edge[(u, v)] = capacity

    def bfs(self, source, sink):
        visited = [False] * self.n
        q = deque()
        q.append(source)
        visited[source] = True
        while q:
            u = q.popleft()
            for i in range(self.n):
                if not visited[i] and self.edge[(u, i)] > 0:
                    visited[i] = True
                    self.parent[i] = u
                    if i == sink:
                        return True
                    q.append(i)

        return False

    def fordFulkerson(self, source, sink):
        maxFlow = 0
        while self.bfs(source, sink):
            pathFlow = float("inf")
            v = sink
            while v != source:
                u = self.parent[v]
                pathFlow = min(pathFlow, self.edge[(u, v)])
                v = u
            maxFlow += pathFlow
            v = sink
            while v != source:
                u = self.parent[v]
                self.edge[(u, v)] -= pathFlow
                self.edge[(v, u)] += pathFlow
                v = u
        return maxFlow


if __name__ == "__main__":
    n, m = map(int, input().split())
    g = Graph(n)
    s, t = map(int, input().split())
    for _ in range(m):
        u, v, w = map(int, input().split())
        g.addEdge(u - 1, v - 1, w)
    print(g.fordFulkerson(s - 1, t - 1))