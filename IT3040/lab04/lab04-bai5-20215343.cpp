#include <bits/stdc++.h>
using namespace std;
void dfs(vector<list<int>> adj)
{
    stack<int> S;
    vector<bool> visited(adj.size());
    S.push(1); // Bắt đầu từ đỉnh số 1

    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    while (!S.empty())
    {
        int u = S.top();
        if (!visited[u]) {
            visited[u] = true;
            cout << u << '\n';
        }
        if (!adj[u].empty()) {
            auto v = adj[u].front();
            adj[u].pop_front();
            if (!visited[v])
                S.push(v);
        }
        else
            S.pop();
    }
}