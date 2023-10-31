#include <bits/stdc++.h>
using namespace std;

// --- Dijkstra's Algorithm ---
class Graph {
   public:
    int n;
    vector<vector<pair<int, int>>> graph;

    Graph(int n) {
        this->n = n;
        graph.resize(n);
    }

    void addEdge(int u, int v, int w) {
        graph[u].push_back({v, w});
    }

    int dijkstra(int start, int end) {
        vector<bool> visited(n, false);
        vector<int> dist(n, INT_MAX);
        dist[start] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, start});
        while (!pq.empty()) {
            int node = pq.top().second;
            pq.pop();
            if (visited[node]) {
                continue;
            }
            visited[node] = true;
            if (node == end) {
                break;
            }
            for (auto [v, w] : graph[node]) {
                if (dist[v] > dist[node] + w) {
                    dist[v] = dist[node] + w;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist[end] != INT_MAX ? dist[end] : -1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    Graph g(n);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u - 1, v - 1, w);
    }
    int s, t;
    cin >> s >> t;
    cout << g.dijkstra(s - 1, t - 1) << endl;

    return 0;
}