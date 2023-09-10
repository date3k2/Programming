#include <bits/stdc++.h>
using namespace std;

void DFS(int v, vector<vector<pair<int, int>>> &graph, vector<int> &z)
{
    for (auto neighbour : graph[v])
    {
        int neighbour_node = neighbour.first;
        int neighbour_weight = neighbour.second;
        z.push_back(neighbour_weight);
        DFS(neighbour_node, graph, z);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int edge_num;
        cin >> edge_num;
        for (int j = 0; j < edge_num; j++)
        {
            int u, w;
            cin >> u >> w;
            graph[i].push_back({u, w});
        }
    }

    vector<int> z;
    DFS(1, graph, z);
    int size_z = z.size();
    vector<int> ones(size_z, 0);
    vector<int> zeros(size_z, 0);
    for (int i = 0; i < size_z; i++)
    {
        int z_val = z[i];
        ones[i] = (i > 0 ? ones[i - 1] : 0) + (z_val == 1 ? 1 : 0);
        zeros[i] = (i > 0 ? zeros[i - 1] : 0) + (z_val == 0 ? 1 : 0);
    }
    int ans = 0;
    int MOD = 998244353;
    for (int i = 0; i < size_z; i++)
    {
        if (z[i] == 1)
        {
            ans = (ans + zeros[size_z - 1] - zeros[i]) % MOD;
        }
    }
    cout << ans;
    return 0;
}
