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
            child[v] += (child[u] + 1);
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
    fo(i, 1, n + 1) parent.push_back(-1);
    Dfs(1);
    fo(i, 1, n) cout << child[i] << " ";
    bool check[n + 1];
    fill(check + 1, check + 1 + n, false);
    vector<int> ucv;
    fo(i, 1, n) if (child[i] == q - 1) leaves.push_back(i);
    if (q == 1)
        fill(check + 1, check + 1 + n, true);
    for (auto i : ucv)
    {
        if (check[i] == 1)
            continue;
        string s = "";
        while (i != 1)
        {
            if (check[parent[i]])
                break;
            i = parent[i];
            s += to_string(ball[i]);
            for (auto k : vt[i])
            {
                if (k != parent[i])
                    s += to_string(ball[k]);
                // check[k]=2;
            }
            if (s.length() >= q)
                if (Check(s).length() == q)
                {
                    check[i] = true;
                    while (parent[i] != -1 && check[parent[i]] == 0)
                    {
                        i = parent[i];
                        check[i] = 1;
                    }
                    cout << Check(s) << " ";
                }
        }
    }
    // fo(i, 1, n)
    //             cout
    //         << (check[i])
    //     ? 1
    //     : 0;
    return 0;
}


    // clock_t start = clock();

    // clock_t end = clock();
    // double time = (double)(end - start) / CLOCKS_PER_SEC * 1000.0;
    // cout << "\n"
    //      << time << "\n";