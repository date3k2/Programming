#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> graph(n + 1);
        vector<int> c(n);
        for (int i = 1; i <= n; i++)
        {
            cin >> graph[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        vector<int> cycle;
        vector<int> deg_in(n + 1);
        vector<int> state(n + 1);
        for (int i = 1; i <= n; i++)
        {
            deg_in[graph[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (state[i] == 0)
            {
                int u = i;
                while (deg_in[u] == 0)
                {
                    cout << u << " ";
                    state[u] = 1;
                    u = graph[u];
                    deg_in[u]--;
                }
                if (deg_in[u] > 0 && state[u] == 0)
                {
                    int first_node = u;
                    int mins = INT_MAX;
                    int idx = 0;
                    int max_iter = 0;
                    while (true)
                    {
                        if (mins > c[u - 1])
                        {
                            mins = c[u - 1];
                            idx = u;
                        }
                        state[u] = 1;
                        u = graph[u];
                        if (u == first_node)
                        {
                            break;
                        }
                        max_iter++;
                        if (max_iter > n)
                        {
                            break;
                        }
                    }
                    first_node = idx;
                    while (true)
                    {
                        idx = graph[idx];
                        cycle.push_back(idx);
                        if (idx == first_node)
                        {
                            break;
                        }
                        max_iter++;
                        if (max_iter > n)
                        {
                            break;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < cycle.size(); i++)
        {
            cout << cycle[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
