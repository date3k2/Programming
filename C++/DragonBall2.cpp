#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int n, q;
vector<int> vt[100005];
vector<int> parent;
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
    int b[n + 1];
    map<int, int> m;
    fo(i, 1, n) cin >> b[i];
    fo(i, 1, n - 1)
    {
        int a, b;
        cin >> a >> b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
    fo(i, 1, n + 1) parent.push_back(-1);
    Dfs(1);
    bool check[n + 1];
    fill(check + 1, check + 1 + n, false);
    vector<int> ucv;
    fo(i, 1, n) if (vt[i].size() == 1)
    {
        int j = i;
        while (b[j] == b[parent[j]])
            j = parent[j];
        ucv.push_back(j);
    }
    if (q == 1)
        fill(check + 1, check + 1 + n, true);
    for (auto i : ucv)
    {
        int p =i;
        if (check[i] == 1)
            continue;
        map<int,int> temp;
        ++m[b[i]];
        temp=m;
        while (i != 1)
        {
            if (check[parent[i]])
                break;
            i = parent[i];
            ++m[b[i]];
            if (m.size() == q)
            {
                check[i] = true;
                while (parent[i] != -1 && check[parent[i]] == 0)
                {
                    i = parent[i];
                    check[i] = 1;
                }
                m = temp;
                // cout<<m.size()<<" "<<p<<"\n";
            }
        }
    }
    for (auto i : ucv)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    fo(i, 1, n)
                cout
            << (check[i])
        ? 1
        : 0;
    return 0;
}