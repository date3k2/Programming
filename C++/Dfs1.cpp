#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
vector<int> vt[300005];
bool check[300005];
void dfs(int u)
{
    check[u] = true;
    cout << u << " ";
    for (auto v : vt[u])
        if (check[v] == false)
            dfs(v);
}
int t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, m, u;
        cin >> n >> m >> u;
        fo(i,1,n) vt[i].clear();
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            vt[u].push_back(v);
            vt[v].push_back(u);
        }
        for (int i = 1; i <= n; i++)
            check[i] = false;
        dfs(u);
        cout << "\n";
    }
    return 0;
}