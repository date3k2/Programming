#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int c = 0;
bool check[5000];
vector<int> adj[5000];
void dfs(int x)
{
    check[x] = true;
    ++c;
    for (auto i : adj[x])
    {
        if (!check[i])
            dfs(i);
    }
}
int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int x, y;
    while (cin >> x >> y)
    {
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> group;
    loop(i, 0, n - 1)
    {
        if (!check[i])
        {
            dfs(i);
            group.push_back(c);
            c = 0;
        }
    }
    ll ans = 0;
    loop(i, 0, group.size() - 1)
        loop(j, i + 1, group.size() - 1)
            ans += group[i] * group[j];
    cout << ans;
    return 0;
}