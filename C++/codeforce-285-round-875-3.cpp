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
        int u[n-1], v[n-1];
        bool check[n+1];
        fill(check, check + n+1, 0);
        check[1] = 1;
        vector<pair<int, int>> q;
        int count = 1;
        loop(i, 0, n - 2)
        {
            cin >> u[i] >> v[i];
            if (check[u[i]] == 0 && check[v[i]] == 0)
                q.push_back({u[i], v[i]});
            else
            {
                check[u[i]] = 1;
                check[v[i]] = 1;
            }
        }
        while (!q.empty())
        {
            ++count;
            vector<pair<int, int>> q_new;
            for (auto i : q)
                if (check[i.first] == 0 && check[i.second] == 0)
                    q_new.push_back({i.first, i.second});
                else
                {
                    check[i.first] = 1;
                    check[i.second] = 1;
                }
            q = q_new;
        }
        cout << count << "\n";
    }
    return 0;
}