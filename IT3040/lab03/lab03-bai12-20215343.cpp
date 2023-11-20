#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; ++i)
/*
Nguyen Duy Dat 20215343
*/
vector<vector<int>> adj(50); // adjacency list
bool visited[50];
int res = 0; // Answer
// Backtracking to find all paths containing k edges
void Try(int u, int k)
{
    if (k == 0)
    {
        ++res;
        return;
    }
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            Try(v, k - 1);
        }
    }
    visited[u] = false;
}
int main()
{
    /*
    Nguyen Duy Dat 20215343
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Read and write in file
    freopen("test.inp", "r", stdin);
    // freopen("test.out", "w", stdout);
    int n, k; // number of vertices
    int m;    // number of total edges
    cin >> n >> k >> m;
    rep(i, 0, m)
    {
        int u, v;
        cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        adj[v - 1].push_back(u - 1); // undirected graph
    }
    for (int i = 0; i < n; ++i)
    {
        fill(visited, visited + n, false);
        Try(i, k);
    }
    cout << res / 2;
    return 0;
}