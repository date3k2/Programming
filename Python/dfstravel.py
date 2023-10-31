import sys

input = sys.stdin.readline


# --- List order of nodes visited by a DFS ---
class Graph:
    def __init__(self, n, adj):
        self.n = n
        self.adj = adj
        self.visited = [False] * n

    def dfs(self, u):
        self.visited[u] = True
        print(u + 1, end=" ")
        for v in self.adj[u]:
            if not self.visited[v]:
                self.dfs(v)


if __name__ == "__main__":
    n, m = map(int, input().split())
    adj = [[] for _ in range(n)]
    for _ in range(m):
        a, b = map(int, input().split())
        adj[a - 1].append(b - 1)
        adj[b - 1].append(a - 1)
    g = Graph(n, adj)
    g.dfs(0)
