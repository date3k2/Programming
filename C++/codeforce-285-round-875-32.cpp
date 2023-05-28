#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int u[n - 1], v[n - 1];
        vector<int> adj[n + 1];
        map<pair<int, int>, int> pos;
        queue<pair<int, int>> q;
        bool check[n - 1];
        fill(check, check + n - 1, 0);
        loop(i, 0, n - 2)
        {
            cin >> u[i] >> v[i];
            adj[u[i]].push_back(v[i]);
            adj[v[i]].push_back(u[i]);
            pos[{u[i], v[i]}] = i;
            pos[{v[i], u[i]}] = i;
            if (u[i] == 1)
            {
                q.push({v[i], i});
                check[i] = 1;
            }
            else if (v[i] == 1)
            {
                q.push({u[i], i});
                check[i] = 1;
            }
        }
        int count = 0;
        while (!q.empty())
        {
            ++count;
            queue<pair<int, int>> q_new;
            while (!q.empty())
            {
                int u = q.front().first;
                int p = q.front().second;
                q.pop();
                for (auto i : adj[u])
                {
                    if (check[pos[{u, i}]] == 1)
                        continue;
                    if (pos[{u, i}] < p)
                        q_new.push({i, pos[{u, i}]});
                    else
                        q.push({i, pos[{u, i}]});
                    check[pos[{u, i}]] = 1;
                }
            }
            q = q_new;
            q_new = queue<pair<int, int>>();
        }
        cout << count << "\n";
    }
    return 0;
}