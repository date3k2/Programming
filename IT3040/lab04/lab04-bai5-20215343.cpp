#include <bits/stdc++.h>
using namespace std;
void dfs(vector< list<int> > adj) {
    stack<int> S;
    vector<bool> visited(adj.size());
    S.push(1); // Bắt đầu từ đỉnh số 1
    
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    while (!S.empty()) {
        int u = S.top();
        S.pop();
        if (!visited[u]) {
            visited[u] = true;
            cout << u << ' ';
            for (int v : adj[u]) {
                if (!visited[v]) S.push(v);
            }
        }
    }
}