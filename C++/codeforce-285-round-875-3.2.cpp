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
        bool check[n + 1];
        fill(check, check + n + 1, 0);
        check[1] = 1;
        vector<int> adj[n + 1];
        map<pair<int, int>, int> pos;
        queue<pair<int, int>> q;
        loop(i, 0, n - 2)
        {
            cin >> u[i] >> v[i];
            adj[u[i]].push_back(v[i]);
            pos[{u[i], v[i]}] = i;
            pos[{v[i], u[i]}] = i;
            if (u[i] == 1)
                q.push({v[i], i});
            else if (v[i] == 1)
                q.push({u[i], i});
        }
        // int count = 1;
        // while (!q.empty())
        // {
        //     ++count;
        //     queue<pair<int, int>> q_new;
        //     while (!q.empty())
        //     {
        //         int u = q.front().first;
        //         int p = q.front().second;
        //         q.pop();
        //         for (auto i : adj[u])
        //         {
        //             if (pos[{u, i}] < p)
        //                 q_new.push({i, pos[{u, i}]});
        //             else
        //                 q.push({i, pos[{u, i}]});
        //         }
        //     }
        //     q = q_new;
        //     q_new = queue<pair<int, int>>();
        // }
        // cout << count << "\n";
        loop(i, 1, n)
        {
            cout << i << ": ";
            for (auto j : adj[i])
                cout << j << " ";
            cout << "\n";
        }
        for (auto i:pos) cout << i.first.first << " " << i.first.second << " " << i.second << "\n";
    }
    return 0;
}