#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int n, q;
vector<int> vt[100005];
int parent[100005];
void Dfs(int v)
{
    for (auto u : vt[v])
    {
        if (parent[u] == -1 && u != 1)
        {
            parent[u] = v;
            Dfs(u);
        }
    }
}
int main()
{
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    unordered_set<int> ball[n + 1];
    fo(i, 1, n)
    {
        int x;
        cin >> x;
        ball[i].insert(x);
    }
    fo(i, 1, n - 1)
    {
        int a, b;
        cin >> a >> b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
    fill(parent + 1, parent + 1 + n, -1);
    Dfs(1);
    bool check[n + 1];
    fill(check + 1, check + 1 + n, false);
    vector<int> leaves;
    fo(i, 1, n) if (vt[i].size() == 1) leaves.push_back(i);
    fo(i, 1, n) if (ball[i].size() == q) check[i] = 1;
    for (auto i : leaves)
    {
        int p = i;
        if (check[p] == 1)
            continue;
        while (p != 1)
        {
            if (check[parent[p]])
                break;
            ball[parent[p]].insert(ball[p].begin(), ball[p].end());
            p = parent[p];
            if (ball[p].size() == q)
            {
                check[p] = true;
                while (parent[p] != -1 && check[parent[p]] == 0)
                {
                    p = parent[p];
                    check[p] = 1;
                }
            }
        }
    }
    fo(i, 1, n)
                cout
            << (check[i])
        ? 1
        : 0;
    return 0;
}