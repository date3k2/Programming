#include <iostream>
#include <queue>
#include <climits>
using namespace std;

vector<int> dijkstra(const vector<vector<pair<int, int>>> &adj)
{
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    int n = adj.size();
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> distance(n, INT_MAX);
    vector<bool> visited(n, false);
    pq.push({0, 0});
    distance[0] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if (visited[u])
            continue;
        visited[u] = true;
        for (auto edge : adj[u])
        {
            int v = edge.first;
            int w = edge.second;
            if (distance[v] > distance[u] + w)
            {
                distance[v] = distance[u] + w;
                pq.push({distance[v], v});
            }
        }
    }
    return distance;
}

int main()
{
    int n = 9;
    vector<vector<pair<int, int>>> adj(n);
    auto add_edge = [&adj](int u, int v, int w)
    {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    };

    add_edge(0, 1, 4);
    add_edge(0, 7, 8);
    add_edge(1, 7, 11);
    add_edge(1, 2, 8);
    add_edge(2, 3, 7);
    add_edge(2, 8, 2);
    add_edge(3, 4, 9);
    add_edge(3, 5, 14);
    add_edge(4, 5, 10);
    add_edge(5, 6, 2);
    add_edge(6, 7, 1);
    add_edge(6, 8, 6);
    add_edge(7, 8, 7);

    vector<int> distance = dijkstra(adj);
    for (int i = 0; i < distance.size(); ++i)
    {
        cout << "distance " << 0 << "->" << i << " = " << distance[i] << endl;
    }

    return 0;
}