#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int n, q;
vector<int> vt[60005];
vector<int> parent;
vector<int> d;
vector<int> ball;
map<int, bool> m;
void Dfs(int v)
{
    for (auto u : vt[v])
    {
        if (parent[u] == -1 && u != 1)
        {
            parent[u] = v;
            d[u] = d[v] + 1;
            Dfs(u);
        }
    }
}
void Check(int v)
{
    for (auto u : vt[v])
    {
        if (u != parent[v])
        {
            m[ball[u]] = true;
            Check(u);
        }
    }
}
int main()
{
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();
    cin >> n >> q;
    ball.push_back(-1);
    fo(i, 1, n)
    {
        int x;
        cin >> x;
        ball.push_back(x);
    }
    fo(i, 1, n - 1)
    {
        int a, b;
        cin >> a >> b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
    fo(i, 1, n + 1) parent.push_back(-1);
    fo(i, 1, n + 1) d.push_back(0);
    Dfs(1);
    bool check[n + 1];
    fill(check + 1, check + 1 + n, false);
    vector<int> ucv;
    int maxDepth = 0;
    fo(i, 1, n) maxDepth = max(maxDepth, d[i]);
    fo(i, 1, n) if (d[i] == maxDepth - q+1) ucv.push_back(i);
    if (q == 1)
        fill(check + 1, check + 1 + n, true);
    for (auto i : ucv)
    {
        int p = i;
        if (check[i] == 1)
            continue;
        m.clear();
        m[ball[i]] = true;
        Check(i);
        while (i != -1)
            if (m.size() == q)
            {
                check[i] = true;
                while (i != -1 && check[parent[i]] == 0)
                {
                    i = parent[i];
                    check[i] = 1;
                }
                if (check[i] == 1)
                    break;
            }
            else
            {
                i = parent[i];
                m[ball[i]] = true;
            }
    }
    fo(i, 1, n)
                cout
            << (check[i])
        ? 1
        : 0;
    clock_t end = clock();
    double time = (double)(end - start) / CLOCKS_PER_SEC * 1000.0;
    cout << "\n"
         << time << "\n";
    // fo(i, 1, n) cout << d[i] << " ";
    // cout<<maxDepth;
    return 0;
}
