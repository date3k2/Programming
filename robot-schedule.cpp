#include <bits/stdc++.h>
#define fo(i, l, h) for (short i = l; i <= h; ++i)
#define ll long long
int dist[103][103], adj[103][103];
using namespace std;
int main()
{
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short n, m;
    cin >> n >> m;
    fo(i, 1, m)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;
    }
    fo(i, 0, n - 1)
        fo(j, 0, n - 1) if (i == j)
            dist[i][j] = 0;
    else if (adj[i][j])
        dist[i][j] = adj[i][j];
    else dist[i][j] = (int)10e8;

    fo(k, 0, n - 1)
        fo(i, 0, n - 1)
            fo(j, 0, n - 1)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                
    fo(i, 0, n - 1)
    {
        fo(j, 0, n - 1) cout << dist[i][j] << " ";
        cout << "\n";
    }
    return 0;
}