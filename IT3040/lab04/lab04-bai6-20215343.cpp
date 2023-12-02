#include <bits/stdc++.h>
using namespace std;

void bfs(vector< list<int> > adj) {
    queue<int> Q;
    vector<bool> visited(adj.size());
    Q.push(1); // Bắt đầu từ đỉnh số 1
    
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();
        if (!visited[u]) {
            visited[u] = true;
            cout << u << ' ';
            for (int v : adj[u]) {
                if (!visited[v]) Q.push(v);
            }
        }
    }
}